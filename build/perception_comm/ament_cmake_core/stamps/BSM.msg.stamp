# BSM.msg
# 假设我们只选取了常用字段，全部是示例，自己按需求增删

std_msgs/Header header

string vehicle_id         # 对应 JSON 里的 "id"
int32 msg_cnt            # 对应 coreData 里的 "msgCnt"
float64 lat             # coreData.lat  (1e-7)
float64 lon             # coreData.long (1e-7)
float64 elev            # coreData.elev
int32 heading           # coreData.heading
float64 speed           # coreData.speed (0.02 m/s)
float64 accel_lat       # coreData.accelSet.lat
float64 accel_long      # coreData.accelSet.long
float64 accel_vert      # coreData.accelSet.vert
float64 accel_yaw       # coreData.accelSet.yaw
string full_json        # 用于存储整个原始解码后的JSON（如果需要）

