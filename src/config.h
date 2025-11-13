#pragma once
#include <map>
#include <string>

namespace CONFIG {
bool valid();

// resource
inline std::string resourceDir = "./resource";
// mini max tts, change to yours
inline std::string groupId = "1887488082316366476";
inline std::string apiKey =
    "eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9."
    "eyJHcm91cE5hbWUiOiLmtbfonrrnlKjmiLdfMzQ0ODI2NDQ1NDQ0MzQxNzY5IiwiVXNlck5h"
    "bW"
    "UiOiLmtbfonrrnlKjmiLdfMzQ0ODI2NDQ1NDQ0MzQxNzY5IiwiQWNjb3VudCI6IiIsIlN1Ym"
    "pl"
    "Y3RJRCI6IjE4ODc0ODgwODIzMjg5NDkzODgiLCJQaG9uZSI6IjEzMTYxMDE0ODUxIiwiR3Jv"
    "dX"
    "BJRCI6IjE4ODc0ODgwODIzMTYzNjY0NzYiLCJQYWdlTmFtZSI6IiIsIk1haWwiOiIiLCJDcm"
    "Vh"
    "dGVUaW1lIjoiMjAyNS0wMy0wMiAxMTozMzo0NSIsIlRva2VuVHlwZSI6MSwiaXNzIjoibWlu"
    "aW"
    "1heCJ9."
    "RJv8tmcY4shDN3BuE24a9mfljzxWeZbP6V59bt91X7Bojw8A6OfQOcpRUp7Rij7Kk9EID73F"
    "kA"
    "nbykYDUzwLSsaQlGNHFYxWvtAtIzczj-"
    "7Mth7Fa3x3dS0SiZtAXH9XVcfxRUiTw49fPXJXZkDiiUUC1ymYPLOJCo65NxdTqDWkf-"
    "5kf1si23lDu3ZYP4Ys4YXglzURq_IH-"
    "XaOOoi05B52F6w91cChBJgpXqqQkIriGjmq7eQENk6iDlJi4-aDSlF-nVo-"
    "aJfm2uujRz5OMdf4Tf6efa_McK_TuQJIG8-GBvRy9jmHnIgMxg7-"
    "1M4RlpbOQNJOR62Nnd1keKirzQ";

// lm
inline std::string lmUrl = "https://api.moonshot.cn/v1";
inline std::string lmApiKey =
    "sk-fUZfC5aa70qpWkqK767rBQlW4xnGe2jtCqaTSH9Ozb2hMRYy";
inline std::string lmModel = "moonshot-v1-8k";
inline std::string lmPrompt = "你是一个智能助手,性格可爱,善于助人,"
                              "每次回复要求：口语化的回复,"
                              "不要使用mardown的标记格式,"
                              "不要带表情包，不要超过30个字";
// avatar roles
inline std::map<std::string, std::string> roles = {
    {"Andrew", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
               "dhp-tools/dhp-tools/651705983152197/61025/"
               "651705983152197_ccf3256b2449c76e77f94276dffcb293.zip"},
    {"MoneyGod", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                 "dhp-tools/dhp-tools/651644573884485/61002/"
                 "651644573884485_2387469906049706416017f105e5340f.zip"},
    {"SuShi", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
              "dhp-tools/dhp-tools/651660515688517/61011/"
              "651660515688517_825de648c30be80a89110dd0e63ecb3b.zip"},
    {"Eric", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
             "digital/model/1719193748558/airuike_20240409.zip"},
    {"ZiXuan", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
               "digital/model/1719194036608/zixuan_20240411v2.zip"},
    {"MingXuan", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                 "duix/digital/model/1719194633518/mingxuan_20240624.zip"},
    {"Arya", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
             "dhp-tools/dhp-tools/651637733658693/61000/"
             "651637733658693_2e0a4278a73411a2ff04ef1a849d2a6d.zip"},
    {"Shirley", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                "dhp-tools/dhp-tools/651686686687301/61026/"
                "651686686687301_846161843f9ffdaaeace716bf3436be5.zip"},
    {"Guanyin", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                "dhp-tools/dhp-tools/651622691811397/60996/"
                "651622691811397_ebe9bd2db8e26c1a7b07932b4a55c45c.zip"},
    {"Sophie", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
               "digital/model/1719193425133/sufei_20240409.zip"},
    {"MuRongXiao",
     "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/digital/"
     "model/1719193516102/murongxiao_20240410.zip"},
    {"ColdFlame", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                  "duix/digital/model/1719193451931/lengyan_20240407.zip"},
    {"Amelia", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
               "digital/model/1719193625986/amelia_20240411.zip"},
    {"ZhaoYa", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
               "digital/model/1719194234727/zhaoya_20240411.zip"},

    {"YiYao", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
              "digital/model/1719194263441/yiyao_20240418.zip"},
    {"XinYan", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
               "digital/model/1719194373660/xinyan_20240411.zip"},
    {"XiaoXuan", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                 "duix/digital/model/1719194313414/xiaoxuan_20240418.zip"},
    {"SiYao", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
              "digital/model/1719194450521/siyao_20240418.zip"},
    {"ShiYa", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/duix/"
              "digital/model/1719194516880/shiya_20240409.zip"},
    {"DearSister", "https://digital-public.obs.cn-east-3.myhuaweicloud.com/"
                   "duix/digital/model/1719194007931/bendi1_0329.zip"}};

inline std::string vadOnnx() { return resourceDir + "/silero_vad.onnx"; }
inline std::string asrOnnx() {
  return resourceDir +
         "/sherpa-onnx-sense-voice-zh-en-ja-ko-yue-2024-07-17/model.onnx";
}
inline std::string asrToken() {
  return resourceDir +
         "/sherpa-onnx-sense-voice-zh-en-ja-ko-yue-2024-07-17/tokens.txt";
}
} // namespace CONFIG
