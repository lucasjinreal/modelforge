#include <filesystem>
#include <stdint.h>

#include "include/forge.h"

int main(int argc, char **argv) {

  if (argc < 2) {
    std::cout << "force takes a dir contains all models you need to forge!\n";
  }

  std::string model_dir = argv[1];
  std::cout << "forging: " << model_dir << std::endl;

  forge::ModelForger *forger = new forge::ModelForger();

  std::vector<std::string> model_files;
  try {
    auto rdi = std::filesystem::recursive_directory_iterator(model_dir);

    for (auto de : rdi) {
      int64_t file_size_i = 0;
      if (de.is_regular_file()) {
        file_size_i = de.file_size();

        std::ifstream stream("model.onnx", std::ios::in | std::ios::binary);
        std::vector<uint8_t> contents((std::istreambuf_iterator<char>(stream)),
                                      std::istreambuf_iterator<char>());

      } else if (de.is_directory()) {
        // pass dir
      }
    }
  } catch (std::filesystem::filesystem_error fe) {
    std::cerr << "Error: " << fe.what() << std::endl;
    exit(1);
  }

  return 0;
}