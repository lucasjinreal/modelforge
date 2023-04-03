# Model Forge

> Code still under construction!

`modelforge` is a C++ header only lib which can merge multiple ONNX/MNN/pth/Tflite models into a single one. This is useful when you shipping your product which takes many tiny models.

By using `forge` you can just need shipping your bounch of models in a single `model.forge` file. This header file can be called in any platform include:

- Android;
- iOS;
- Windows;
- Unreal Engine;
- Mac;
- Linuix;


Since `modelforge` is just header only, there is no need to copy any libs, just take `forge.h` file to your project.

By building this project, you will get a `forge` command-line tool which can be called when you need to forge models.

Be note:
`modelforge` is not `safetensors`, it contains multiple models but not just one model graph.