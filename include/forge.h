#pragma once

#include <cstdio>
#include <iostream>
#include <map>
#include <stdint.h>
#include <string>
#include <vector>
#include <fstream>


namespace forge {

class ModelForger {
public:
  ModelForger(std::string forged_model_path = "") {}

  int forge(std::vector<std::string> model_paths) { return 0; }
  int deforge(std::string forged_model_path) {}

  char *getModelBufferByKey(std::string k) {}

private:
  bool crypto = false;
  std::string forged_model_path;
  std::map<std::string, int64_t> model_bits_len_map;
  std::map<std::string, uint8_t *> model_buffer_map;
};

} // namespace forge