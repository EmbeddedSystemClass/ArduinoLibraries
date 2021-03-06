#ifndef BlinkerConfig_H
#define BlinkerConfig_H

#include <utility/BlinkerDebug.h>

#define BLINKER_VERSION                 "0.2.0"

#define BLINKER_CONNECT_TIMEOUT_MS      10000UL

#define BLINKER_STREAM_TIMEOUT          100

#define BLINKER_NTP_TIMEOUT             1000UL

#define BLINKER_GPS_MSG_LIMIT           30000UL

#define BLINKER_PRINT_MSG_LIMIT         20

#define BLINKER_MQTT_MSG_LIMIT          1000UL

#define BLINKER_BRIDGE_MSG_LIMIT        60000UL

#define BLINKER_LINK_MSG_LIMIT          60000UL

#define BLINKER_MQTT_KEEPALIVE          120000UL

#define BLINKER_SMS_MSG_LIMIT           60000UL

#define BLINKER_PUSH_MSG_LIMIT          60000UL

#define BLINKER_WECHAT_MSG_LIMIT        60000UL

#define BLINKER_WEATHER_MSG_LIMIT       60000UL

#define BLINKER_AQI_MSG_LIMIT           60000UL

#define BLINKER_CONFIG_UPDATE_LIMIT     60000UL

#define BLINKER_CONFIG_GET_LIMIT        60000UL

#define BLINKER_SMS_MAX_SEND_SIZE       128

#if defined(BLINKER_BUTTON_LONGPRESS_POWERDOWN)
    #define BLINKER_PRESSTIME_POWERDOWN     2000UL
    
    #define BLINKER_PRESSTIME_RESET         10000UL
#endif

#if defined(BLINKER_WIFI) || defined(BLINKER_MQTT)
    #define BLINKER_MAX_WIDGET_SIZE         16
#else
    #define BLINKER_MAX_WIDGET_SIZE         8
#endif

#define BLINKER_OBJECT_NOT_AVAIL        -1

#ifndef BLINKER_MAX_READ_SIZE
#if defined(ESP8266) || defined(ESP32)
    #define BLINKER_MAX_READ_SIZE       512
#else
    #define BLINKER_MAX_READ_SIZE       256
#endif
#endif

#ifndef BLINKER_MAX_SEND_SIZE
#if defined(ESP8266) || defined(ESP32)
    #define BLINKER_MAX_SEND_SIZE       512
#else
    #define BLINKER_MAX_SEND_SIZE       128
#endif
#endif

#define BLINKER_AUTHKEY_SIZE            14

// #define BLINKER_NO_LOGO

#define BLINKER_LOGO_3D

// #define	BLINKER_DEBUG

#define BLINKER_CMD_ON                  "on"

#define BLINKER_CMD_OFF                 "off"

#define BLINKER_CMD_TRUE                "true"

#define BLINKER_CMD_FALSE               "false"

#define BLINKER_CMD_JOYSTICK            "joy"

#define BLINKER_CMD_GYRO                "gyro"

#define BLINKER_CMD_AHRS                "ahrs"

#define BLINKER_CMD_GPS                 "gps"

#define BLINKER_CMD_RGB                 "rgb"

#define BLINKER_CMD_VIBRATE             "vibrate"

#define BLINKER_CMD_BUTTON_TAP          "tap"

#define BLINKER_CMD_BUTTON_PRESSED      "pre"

#define BLINKER_CMD_BUTTON_RELEASED     "pup"

#define BLINKER_CMD_NEWLINE             "\n"

#define BLINKER_CMD_INTERSPACE          " "

#define BLINKER_CMD_DATA                "data"

#define BLINKER_CMD_GET                 "get"

#define BLINKER_CMD_SET                 "set"

#define BLINKER_CMD_STATE               "state"

#define BLINKER_CMD_ONLINE              "online"

#define BLINKER_CMD_CONNECTED           "connected"

#define BLINKER_CMD_VERSION             "version"

#define BLINKER_CMD_NOTICE              "notice"

#define BLINKER_CMD_BUILTIN_SWITCH      "switch"

#define BLINKER_CMD_NOTFOUND            "device not found"

#define BLINKER_CMD_AUTO                "auto"

#define BLINKER_CMD_AUTOID              "autoId"

#define BLINKER_CMD_AUTODATA            "autoData"

#define BLINKER_CMD_DELETID             "deletId"

#define BLINKER_CMD_LOGICDATA           "logicData"

#define BLINKER_CMD_LOGICTYPE           "logicType"

#define BLINKER_CMD_LESS                "less"

#define BLINKER_CMD_EQUAL               "equal"

#define BLINKER_CMD_GREATER             "greater"

#define BLINKER_CMD_NUMBERIC            "numberic"

#define BLINKER_CMD_OR                  "or"

#define BLINKER_CMD_AND                 "and"

#define BLINKER_CMD_COMPARETYPE         "compareType"

#define BLINKER_CMD_TRIGGER             "trigger"

#define BLINKER_CMD_DURATION            "duration"

#define BLINKER_CMD_TARGETKEY           "targetKey"

#define BLINKER_CMD_TARGETSTATE         "targetState"

#define BLINKER_CMD_TARGETDATA          "targetData"

#define BLINKER_CMD_TIMESLOT            "timeSlot"

#define BLINKER_CMD_LINKDEVICE          "linkDevice"

#define BLINKER_CMD_LINKTYPE            "linkType"

#define BLINKER_CMD_LINKDATA            "linkData"

#define BLINKER_CMD_TRIGGEDDATA         "triggedData"

#define BLINKER_CMD_TIMER               "timer"

#define BLINKER_CMD_RUN                 "run"

#define BLINKER_CMD_ENABLE              "ena"

#define BLINKER_CMD_COUNTDOWN           "countdown"

#define BLINKER_CMD_COUNTDOWNDATA       "countdownData"

#define BLINKER_CMD_TOTALTIME           "ttim"

#define BLINKER_CMD_RUNTIME             "rtim"

#define BLINKER_CMD_ACTION              "act"

#define BLINKER_CMD_ACTION1             "act1"

#define BLINKER_CMD_ACTION2             "act2"

#define BLINKER_CMD_LOOP                "loop"

#define BLINKER_CMD_LOOPDATA            "loopData"

#define BLINKER_CMD_TIME                "tim"

#define BLINKER_CMD_TIMES               "tis"

#define BLINKER_CMD_TIME1               "dur1"

#define BLINKER_CMD_TIME2               "dur2"

#define BLINKER_CMD_TIMING              "timing"

#define BLINKER_CMD_TIMINGDATA          "timingData"

#define BLINKER_CMD_DAY                 "day"

#define BLINKER_CMD_TASK                "task"

#define BLINKER_CMD_DELETETASK          "dlt"

#define BLINKER_CMD_DETAIL              "detail"

#define BLINKER_CMD_MESSAGE             "message"

#define BLINKER_CMD_DEVICENAME          "deviceName"

#define BLINKER_CMD_IOTID               "iotId"

#define BLINKER_CMD_IOTTOKEN            "iotToken"

#define BLINKER_CMD_PRODUCTKEY          "productKey"

#define BLINKER_CMD_BROKER              "broker"

#define BLINKER_CMD_UUID                "uuid"

#define BLINKER_CMD_SMS                 "sms"

#define BLINKER_CMD_PUSH                "push"

#define BLINKER_CMD_WECHAT              "wechat"

#define BLINKER_CMD_WEATHER             "weather"

#define BLINKER_CMD_AQI                 "aqi"

#define BLINKER_CMD_CONFIG              "config"

#define BLINKER_CMD_DEFAULT             "default"

#define BLINKER_CMD_SWITCH              "swi"

#define BLINKER_CMD_VALUE               "val"

#define BLINKER_CMD_ICON                "ico"

#define BLINKER_CMD_COLOR               "col"

#define BLINKER_CMD_TITLE               "tit"

#define BLINKER_CMD_CONTENT             "con"

#define BLINKER_CMD_TEXT                "tex"

#define BLINKER_CMD_TEXT1               "tex1"

#define BLINKER_CMD_TEXTCOLOR           "tco"

#define BLINKER_CMD_UNIT                "uni"

#define BLINKER_JOYSTICK_VALUE_DEFAULT  128

#define BLINKER_ONE_DAY_TIME            86400UL

#ifndef BLINKER_MAX_BRIDGE_SIZE
    #if defined(BLINKER_MQTT)
        #define BLINKER_MAX_BRIDGE_SIZE             4
    #elif defined(BLINKER_PRO)
        #define BLINKER_MAX_BRIDGE_SIZE             16
    #endif
#endif

#if defined(BLINKER_WIFI) || defined(BLINKER_MQTT) || defined(BLINKER_PRO)
    #define BLINKER_CMD_SMS_NUMBER              1

    #define BLINKER_CMD_PUSH_NUMBER             2

    #define BLINKER_CMD_WECHAT_NUMBER           3

    #define BLINKER_CMD_WEATHER_NUMBER          4

    #define BLINKER_CMD_AQI_NUMBER              5

    #define BLINKER_CMD_BRIDGE_NUMBER           6

    #define BLINKER_CMD_CONFIG_UPDATE_NUMBER    7

    #define BLINKER_CMD_CONFIG_GET_NUMBER       8

    #define BLINKER_CMD_DATA_STORAGE_NUMBER     9

    #define BLINKER_CMD_DEFAULT_NUMBER          0

#endif

#if defined(BLINKER_MQTT) || defined(BLINKER_PRO)
    #define BLINKER_MQTT_BORKER_ALIYUN      "aliyun"

    #define BLINKER_MQTT_ALIYUN_HOST        "public.iot-as-mqtt.cn-shanghai.aliyuncs.com"

    #define BLINKER_MQTT_ALIYUN_PORT        1883

    #define BLINKER_MQTT_BORKER_QCLOUD      "qcloud"

    #define BLINKER_MQTT_QCLOUD_HOST        "iotcloud-mqtt.gz.tencentdevices.com"

    #define BLINKER_MQTT_QCLOUD_PORT        8883

    #define BLINKER_MQTT_BORKER_ONENET      "onenet"

    #define BLINKER_MQTT_ONENET_HOST        "mqtt.heclouds.com"

    #define BLINKER_MQTT_ONENET_PORT        6002

    #define BLINKER_MQTT_PING_TIMEOUT       30000UL

    #define BLINKER_MQTT_HOST_SIZE          50

    #define BLINKER_MQTT_ID_SIZE            110

    #define BLINKER_MQTT_NAME_SIZE          80

    #define BLINKER_MQTT_KEY_SIZE           50

    #define BLINKER_MQTT_PINFO_SIZE         12

    #define BLINKER_MQTT_UUID_SIZE          40

    #define BLINKER_MQTT_DEVICEID_SIZE      26

    #define BLINKER_MQTT_DEVICENAME_SIZE    14

#endif

#if defined(ESP8266) || defined(ESP32)

    #define BLINKER_TIMING_TIMER_SIZE       10

    #define BLINKER_TYPE_STATE              0

    #define BLINKER_TYPE_NUMERIC            1

    #define BLINKER_TYPE_OR                 2

    #define BLINKER_TYPE_AND                3

    #define BLINKER_COMPARE_LESS            0

    #define BLINKER_COMPARE_EQUAL           1

    #define BLINKER_COMPARE_GREATER         2

    #define BLINKER_CHECK_DATA              170

    #define BLINKER_EEP_SIZE                4096

    #define BLINKER_EEP_ADDR_CHECK          0

    #define BLINKER_CHECK_SIZE              1

    #define BLINKER_EEP_ADDR_AUTONUM        (BLINKER_EEP_ADDR_CHECK + BLINKER_CHECK_SIZE)

    #define BLINKER_AUTONUM_SIZ             1

    #define BLINKER_EEP_ADDR_AUTO_START     (BLINKER_EEP_ADDR_AUTONUM + BLINKER_AUTONUM_SIZ)

    ////////////////////////////////////////////////////////////////////////////////////////

    #define BLINKER_EEP_ADDR_AUTOID         0

    #define BLINKER_AUTOID_SIZE             4

    #define BLINKER_EEP_ADDR_TYPESTATE      (BLINKER_EEP_ADDR_AUTOID + BLINKER_AUTOID_SIZE)

    #define BLINKER_TYPESTATE_SIZE          1

    #define BLINKER_EEP_ADDR_AUTO1          (BLINKER_EEP_ADDR_TYPESTATE + BLINKER_TYPESTATE_SIZE)

    #define BLINKER_AUTODATA_SIZE           4

    #define BLINKER_EEP_ADDR_TARGETKEY1     (BLINKER_EEP_ADDR_AUTO1 + BLINKER_AUTODATA_SIZE)

    #define BLINKER_TARGETKEY_SIZE          12

    #define BLINKER_EEP_ADDR_TARGETDATA1    (BLINKER_EEP_ADDR_TARGETKEY1 + BLINKER_TARGETKEY_SIZE)

    #define BLINKER_TARGETDATA_SIZE         4

    #define BLINKER_EEP_ADDR_AUTO2          (BLINKER_EEP_ADDR_TARGETDATA1 + BLINKER_TARGETDATA_SIZE)

    #define BLINKER_AUTODATA_SIZE           4

    #define BLINKER_EEP_ADDR_TARGETKEY2     (BLINKER_EEP_ADDR_AUTO2 + BLINKER_AUTODATA_SIZE)

    #define BLINKER_TARGETKEY_SIZE          12

    #define BLINKER_EEP_ADDR_TARGETDATA2    (BLINKER_EEP_ADDR_TARGETKEY2 + BLINKER_TARGETKEY_SIZE)

    #define BLINKER_TARGETDATA_SIZE         4

    // #define BLINKER_TARGET_DATA_SIZE        (BLINKER_AUTOID_SIZE + BLINKER_AUTODATA_SIZE + BLINKER_TARGETKEY_SIZE + BLINKER_TARGETDATA_SIZE)

    #define BLINKER_EEP_ADDR_LINKDEVICE1    (BLINKER_EEP_ADDR_TARGETDATA2 + BLINKER_TARGETDATA_SIZE)

    #define BLINKER_LINKDEVICE_SIZE         26

    #define BLINKER_EEP_ADDR_LINKTYPE1      (BLINKER_EEP_ADDR_LINKDEVICE1 + BLINKER_LINKDEVICE_SIZE)

    #define BLINKER_LINKTYPE_SIZE           18

    #define BLINKER_EEP_ADDR_LINKDATA1      (BLINKER_EEP_ADDR_LINKTYPE1 + BLINKER_LINKTYPE_SIZE)

    #define BLINKER_LINKDATA_SIZE           212

    #define BLINKER_EEP_ADDR_LINKDEVICE2    (BLINKER_EEP_ADDR_LINKDATA1 + BLINKER_LINKDATA_SIZE)

    #define BLINKER_LINKDEVICE_SIZE         26

    #define BLINKER_EEP_ADDR_LINKTYPE2      (BLINKER_EEP_ADDR_LINKDEVICE2 + BLINKER_LINKDEVICE_SIZE)

    #define BLINKER_LINKTYPE_SIZE           18

    #define BLINKER_EEP_ADDR_LINKDATA2      (BLINKER_EEP_ADDR_LINKTYPE2 + BLINKER_LINKTYPE_SIZE)

    #define BLINKER_LINKDATA_SIZE           212

    #define BLINKER_ONE_AUTO_DATA_SIZE      (BLINKER_AUTOID_SIZE + BLINKER_TYPESTATE_SIZE + (BLINKER_AUTODATA_SIZE + BLINKER_TARGETKEY_SIZE + BLINKER_TARGETDATA_SIZE + BLINKER_LINKDEVICE_SIZE + BLINKER_LINKTYPE_SIZE + BLINKER_LINKDATA_SIZE) * 2)

#endif

#if defined(BLINKER_PRO)

    #ifndef BLINKER_BUTTON_PIN
        #define BLINKER_BUTTON_PIN              2
    #endif

    #define BLINKER_CMD_REGISTER            "register"

    #define BLINKER_AIR_DETECTOR            "OwnAirdetector"

    #define BLINKER_SMART_LAMP              "OwnLamp"

    #ifndef BLINKER_PRO_VERSION
        #define BLINKER_PRO_VERSION             "1.0.0"
    #endif

    #define BLINKER_PRO_VERSION_CODE        B00000001

    #define BLINKER_PRO_OTA_START           B01010011

    #define BLINKER_PRO_OTA_CLEAR           B00000001

    #define BLINKER_CHECK_AUTH_TIME         120000UL

    #define BLINKER_AUTH_CHECK_DATA         0x55

    #define BLINKER_EEP_ADDR_SSID           1280

    #define BLINKER_SSID_SIZE               32

    #define BLINKER_EEP_ADDR_PSWD           (BLINKER_EEP_ADDR_SSID + BLINKER_SSID_SIZE)

    #define BLINKER_PSWD_SIZE               32

    #define BLINKER_EEP_ADDR_WLAN_CHECK     (BLINKER_EEP_ADDR_PSWD + BLINKER_PSWD_SIZE)

    #define BLINKER_WLAN_CHECK_SIZE         3

    #define BLINKER_EEP_ADDR_AUUID          (BLINKER_EEP_ADDR_WLAN_CHECK + BLINKER_WLAN_CHECK_SIZE)

    #define BLINKER_AUUID_SIZE              34

    #define BLINKER_EEP_ADDR_AUTH_CHECK     (BLINKER_EEP_ADDR_AUUID + BLINKER_AUUID_SIZE)

    #define BLINKER_AUTH_CHECK_SIZE         1

    #define BLINKER_PRO_DATA_SIZE           (BLINKER_SSID_SIZE + BLINKER_PSWD_SIZE + BLINKER_WLAN_CHECK_SIZE + BLINKER_AUUID_SIZE + BLINKER_AUTH_CHECK_SIZE)

    #define BLINKER_EEP_ADDR_OTA_INFO       (BLINKER_EEP_ADDR_AUTH_CHECK + BLINKER_AUTH_CHECK_SIZE)

    #define BLINKER_OTA_INFO_SIZE           4

    #define BLINKER_EEP_ADDR_OTA_CHECK      (BLINKER_EEP_ADDR_OTA_INFO + BLINKER_OTA_INFO_SIZE)

    #define BLINKER_OTA_CHECK_SIZE          1

#endif

#if defined(ESP8266) || defined(ESP32)

    #define BLINKER_ACTION_SIZE                     30

    #define BLINKER_ACTION_NUM                      2

    #define BLINKER_EEP_ADDR_TIMER                  1536

    #define BLINKER_EEP_ADDR_TIMER_COUNTDOWN        BLINKER_EEP_ADDR_TIMER

    #define BLINKER_TIMER_COUNTDOWN_SIZE            2

    #define BLINKER_EEP_ADDR_TIMER_COUNTDOWN_ACTION (BLINKER_EEP_ADDR_TIMER + BLINKER_TIMER_COUNTDOWN_SIZE)

    #define BLINKER_TIMER_COUNTDOWN_ACTION_SIZE     (BLINKER_ACTION_SIZE * BLINKER_ACTION_NUM)

    #define BLINKER_EEP_ADDR_TIMER_LOOP             (BLINKER_EEP_ADDR_TIMER_COUNTDOWN_ACTION + BLINKER_TIMER_COUNTDOWN_ACTION_SIZE)

    #define BLINKER_TIMER_LOOP_SIZE                 4

    #define BLINKER_EEP_ADDR_TIMER_LOOP_ACTION1     (BLINKER_EEP_ADDR_TIMER_LOOP + BLINKER_TIMER_LOOP_SIZE)

    #define BLINKER_TIMER_LOOP_ACTION1_SIZE         (BLINKER_ACTION_SIZE * BLINKER_ACTION_NUM)

    #define BLINKER_EEP_ADDR_TIMER_LOOP_ACTION2     (BLINKER_EEP_ADDR_TIMER_LOOP_ACTION1 + BLINKER_TIMER_LOOP_ACTION1_SIZE)

    #define BLINKER_TIMER_LOOP_ACTION2_SIZE         (BLINKER_ACTION_SIZE * BLINKER_ACTION_NUM)

    #define BLINKER_EEP_ADDR_TIMER_TIMING_COUNT     (BLINKER_EEP_ADDR_TIMER_LOOP_ACTION2 + BLINKER_TIMER_LOOP_ACTION2_SIZE)

    #define BLINKER_TIMER_TIMING_COUNT_SIZE         1

    #define BLINKER_EEP_ADDR_TIMER_TIMING           (BLINKER_EEP_ADDR_TIMER_TIMING_COUNT + BLINKER_TIMER_TIMING_COUNT_SIZE)

    #define BLINKER_TIMER_TIMING_SIZE               4

    #define BLINKER_TIMER_TIMING_ACTION_SIZE        (BLINKER_ACTION_SIZE * BLINKER_ACTION_NUM)

    #define BLINKER_ONE_TIMER_TIMING_SIZE           (BLINKER_TIMER_TIMING_SIZE + BLINKER_TIMER_TIMING_ACTION_SIZE)

    #define BLINKER_EEP_ADDR_TIMER_ERASE            2687

    #define BLINKER_TIMER_ERASE_SIZE                1

    #define BLINKER_EEP_ADD_TIMER_END               (BLINKER_EEP_ADDR_TIMER_ERASE + BLINKER_TIMER_ERASE_SIZE)

    // 2 60 | 4 120 | 1 4 60 x 10
    // 793 896

#endif

#endif