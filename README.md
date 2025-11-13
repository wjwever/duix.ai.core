<h1 align="center">duix.ai.core </h1>
<div class="column" align="middle">
  <p align="center">
  </p>
  </a>
  <a href="https://en.cppreference.com/w/">
    <img src="https://img.shields.io/badge/Language-C++-blue.svg" alt="language"/>
  </a>
  <img src="https://img.shields.io/badge/platform-Linux-9cf.svg" alt="linux"/>
  <img src="https://img.shields.io/badge/Release-v0.1.0-green.svg" alt="release"/>

<h4 align="center">If you are interested in This project, please kindly give Me a triple `Star`, `Fork` and `Watch`, Thanks!</h4>
Hello everyone! This project is dedicated to a **LightWeight and Cheap** digital human dialogue system. 
**LightWeight** means The project runs without gpus </br>
**Cheap** meas The project's functions should be deployed locally as much as possible instead of calling commercial APIs 

https://github.com/user-attachments/assets/40ad194b-370a-4a00-9264-67c796e43e12


* avatar: [GitHub - GuijiAI/duix.ai](https://github.com/GuijiAI/duix.ai)
* vad: [silero-vad](https://github.com/snakers4/silero-vad)
* asr: [SenseVoice](https://github.com/FunAudioLLM/SenseVoice/)
* tts: [minimax](https://hailuoai.com/audio)
* lm: kimi now， it is easy to try deepseek and some other language models，just to change the api url in conf/config.json

## Tested environment: ubuntu 22.04
```bash
git clone --recurse-submodules https://github.com/wjwever/duix.ai.core.git 
cd duix.ai.core

# Rtart avatar websocket server at port 6001, directory duix.ai.core/build
# Remember to use your apikey in config.h
bash start_avatar.sh

#start ui , open http://localhost:6003 by google browser and give it a try
bash web/start_web.sh

```
## macos
Not tested

# TODOS
- [ ] Optimize docker workflow



