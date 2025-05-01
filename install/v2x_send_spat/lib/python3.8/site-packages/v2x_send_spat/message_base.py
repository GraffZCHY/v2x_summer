from typing import Any, Dict, List, Tuple, Union
import numpy as np


class MessageBase():
    KEYS = []
    def __init__(self, data: Union[List[float], np.ndarray] = [], collection: bool = False):
        if isinstance(data, list):
            if len(data) == 0:
                data = np.zeros(len(self.KEYS), dtype=np.float64)
            else:
                assert len(data) == len(self.KEYS), "size mismatch"
                data = np.array(data, dtype=np.float64)

        assert len(data) == len(self.KEYS), "size mismatch"
        assert isinstance(data, np.ndarray), "type mismatch"
        assert data.dtype == np.float64, "dtype mismatch"
        self._data = data
        self._key_to_idx = self.get_key_to_idx()
        for k, v in zip(self.KEYS, data):
            setattr(self, k, v)

    def to_ros(self) -> List[float]:
        return self._data.tolist()

    def to_can(self) -> Dict:
        return dict(zip(self.KEYS, self._data))
    
    def to_numpy(self) -> np.ndarray:
        return np.array(self._data, dtype=np.float64)

    @classmethod
    def get_keys(cls) -> List[str]:
        return cls.KEYS

    @classmethod
    def get_num_keys(cls) -> int:
        return len(cls.KEYS)

    @classmethod
    def get_key_to_idx(cls) -> Dict:
        return {k: i for i, k in enumerate(cls.KEYS)}

    def __new__(cls, data: Union[List[float], np.ndarray] = [], collection: bool = False) -> Union["MessageBase", "MessageCollection"]:
        if collection:
            return MessageCollection(cls, data)
        return super().__new__(cls)

    # def __getattr__(self, name: str) -> Any:
    #     if name.startswith("_"):
    #         return super().__getattr__(name)
    #     return self._data[self._key_to_idx[name]]

    def __setattr__(self, name: str, val: Any) -> None:
        if not name.startswith("_"):
            self._data[self._key_to_idx[name]] = val
            val = self._data[self._key_to_idx[name]] # get correct data type
        super().__setattr__(name, val)

    def __len__(self) -> int:
        return len(self._data)

    def __repr__(self) -> str:
        s = f"{self.__class__.__name__}("
        if len(self) == 0:
            return s + ")"
        for k, v in zip(self.KEYS, self._data):
            s += f"{k}={v}, "
        s = s[:-2] + ")"
        return s

    __str__ = __repr__


class MessageCollection():
    def __init__(self, _type: MessageBase, data: Union[List[float], np.ndarray] = []):
        assert len(data) % _type.get_num_keys() == 0, "size mismatch"
        self._type = _type
        self._num_keys = _type.get_num_keys()
        self._data, self._data_objects = self._prepare_data(data)

    def get_num_objects(self) -> int:
        return len(self)

    def get_num_keys(self) -> int:
        return self._num_keys

    def get_keys(self) -> List[str]:
        return self._type.get_keys()
    
    def get_key_to_idx(self) -> Dict:
        return self._type.get_key_to_idx()

    def append(self, d: MessageBase) -> None:
        assert isinstance(d, self._type)
        self._data.append(d._data)
        self._data_objects.append(d)

    def create_new_element(self) -> MessageBase:
        return self._type()

    def to_ros(self) -> List[float]:
        return np.array(self._data).flatten().tolist()

    def to_can(self) -> List[Dict]:
        return [d.to_can() for d in self._data_objects]
    
    def to_numpy(self) -> np.ndarray:
        return np.array(self._data, dtype=np.float64)

    def _prepare_data(self, data: Union[List[float], np.ndarray, None]) -> Tuple[List[np.ndarray], List[MessageBase]]:
        num_objects = len(data) // self._num_keys
        data = np.array(data, dtype=np.float64).reshape(num_objects, self._num_keys)
        data = [d for d in data]
        data_objects = [self._type(d) for d in data]
        return data, data_objects

    def __getitem__(self, item: Union[int, slice]) -> List[MessageBase]:
        return self._data_objects[item]

    def __len__(self) -> int:
        return len(self._data)

    def __repr__(self) -> str:
        s = f"{self._type.__name__}Collection("
        s += f"num_objects={len(self)}, "
        s += f"data={self._data_objects})"
        return s

    __str__ = __repr__