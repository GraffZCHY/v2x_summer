# 🛰️ v2x_send_spat  
**A ROS 2 node for receiving and decoding SPaT (Message ID 14) messages**  
**一个用于接收并解码 SPaT（消息ID 14）报文的 ROS 2 节点**

---

## 📌 功能简介 | Features

- ✅ 接收 V2X 广播数据（如 DSRC 或仿真环境中 RSU 发送的消息）  
  Receive V2X broadcast messages from RSU or simulation

- ✅ 识别并提取 Message ID = 14 的 SPaT 消息  
  Identify and extract SPaT messages (Message ID = 14)

- ✅ 解码信号灯状态、剩余时间、交叉口编号等信息  
  Decode traffic light states, remaining time, intersection ID, etc.

- ✅ 以 ROS 消息发布结构化数据供其他模块订阅  
  Publish decoded info as ROS topics for other modules to subscribe

---

## 📁 项目结构 | Project Structure

```
buckeyeautodrive/
├── src/
│   └── v2x_send_spat/
│       ├── v2x_send_spat.py         # 主程序 Main Python node
├── install/
├── build/
└── log/
```

---

## ⚙️ 构建与运行 | Build & Run

### 📥 第一步：进入项目目录  
**Step 1: Change to project directory**

```bash
cd ~/buckeyeautodrive
```

### 🛠️ 第二步：构建工作区  
**Step 2: Build workspace**

```bash
colcon build
```

### 🔄 第三步：加载环境变量  
**Step 3: Source the environment**

```bash
source install/setup.sh
```

### 🚀 第四步：运行节点  
**Step 4: Run the node**

```bash
ros2 run v2x_send_spat v2x_send_spat.py
```

---

## 📡 输入输出 | Input & Output

### 输入 | Input

- **话题（topic）**: `/v2x_raw_data`  
- **类型（type）**: `std_msgs/msg/String` 或自定义消息类型  
- **内容（content）**: 原始十六进制字符串，包含 SPaT 报文

### 输出 | Output

- **话题（topic）**: `/decoded_spat`  
- **类型（type）**: 自定义 ROS 消息  
- **内容（content）**: 结构化 SPaT 信息（红绿灯状态、持续时间等）

---

## 📦 依赖项 | Dependencies

```bash
- ROS2（建议 Humble 或 Foxy）
- Python 3
- pyasn1
- asn1tools
- SAE J2735 ASN.1 定义文件（如 SPAT.asn）
```

---

## 📎 示例输出 | Example Output

```text
Received SPaT message (ID 14)
Intersection ID: 1234
Phase: Green
Remaining Time: 8.2 seconds
```

-
