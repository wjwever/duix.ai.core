#include "config.h"
#include "clog.h"

namespace CONFIG {
bool valid() {
  bool ret = true;
  auto check = [&ret](const std::string &desc, const std::string &key) {
    if (key.size() == 0) {
      ret = false;
      PLOGE << desc << " empty, check config.h";
    }
  };
  check("resourceDir", resourceDir);
  check("groupId", groupId);
  check("apiKey", apiKey);
  check("lmUrl", lmUrl);
  check("lmApiKey", lmApiKey);
  check("lmModel", lmModel);
  check("lmPrompt", lmPrompt);
  return ret;
}
} // namespace CONFIG
