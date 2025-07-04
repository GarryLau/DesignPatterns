# 人脸识别推理引擎 - Adapter模式实现

## 概述

本项目展示了如何使用Adapter设计模式来统一不同推理后端（MNN、RKNN、TensorRT）的接口，实现人脸识别推理的统一调用。

## 设计模式说明

### Adapter模式结构

本项目实现了标准的Adapter模式，包含以下组件：

1. **Target（目标接口）**: `FaceInferenceEngine`
   - 定义了统一的推理接口
   - 客户端期望使用的接口

2. **Adaptee（被适配者）**: `MnnBackend`、`RknnBackend`、`TensorrtBackend`
   - 各个推理后端的具体实现
   - 提供了特有的推理接口

3. **Adapter（适配器）**: `MnnFaceAdapter`、`RknnFaceAdapter`、`TensorrtFaceAdapter`
   - 将各个后端的特有接口适配到统一接口
   - 继承自Target接口，包含Adaptee实例

## 文件结构

```
Adapter2/
├── face_inference_engine.h          # 抽象接口（Target）
├── face_inference_engine.cpp        # 工厂方法实现
├── mnn_backend.h                    # MNN后端实现（Adaptee）
├── rknn_backend.h                   # RKNN后端实现（Adaptee）
├── tensorrt_backend.h               # TensorRT后端实现（Adaptee）
├── mnn_face_adapter.h               # MNN适配器（Adapter）
├── rknn_face_adapter.h              # RKNN适配器（Adapter）
├── tensorrt_face_adapter.h          # TensorRT适配器（Adapter）
├── face_recognition_demo.cpp        # 演示程序
├── Makefile                         # 编译脚本
└── README.md                        # 说明文档
```

## 核心类说明

### FaceInferenceEngine（目标接口）

```cpp
class FaceInferenceEngine {
public:
    enum class BackendType { MNN, RKNN, TENSORRT };
    
    virtual void preprocess() = 0;    // 预处理
    virtual void inference() = 0;     // 推理
    virtual void postprocess() = 0;   // 后处理
    
    static std::shared_ptr<FaceInferenceEngine> createInstance(BackendType type);
};
```

### 后端实现类（被适配者）

每个后端都提供了特有的接口：

- `MnnBackend`: `mnnPreprocess()`, `mnnInference()`, `mnnPostprocess()`
- `RknnBackend`: `rknnPreprocess()`, `rknnInference()`, `rknnPostprocess()`
- `TensorrtBackend`: `tensorrtPreprocess()`, `tensorrtInference()`, `tensorrtPostprocess()`

### 适配器类（适配器）

每个适配器都：
- 继承自`FaceInferenceEngine`
- 包含对应后端的实例
- 将统一接口调用转换为后端特有接口调用

## 使用方法

### 编译

```bash
make
```

### 运行

```bash
make run
```

或者

```bash
./face_recognition_demo
```

### 在代码中使用

```cpp
#include "face_inference_engine.h"

// 创建MNN推理引擎
auto engine = FaceInferenceEngine::createInstance(FaceInferenceEngine::BackendType::MNN);

// 统一接口调用
engine->preprocess();
engine->inference();
engine->postprocess();
```

## 设计优势

1. **统一接口**: 客户端可以使用统一的接口调用不同的推理后端
2. **易于扩展**: 添加新的推理后端只需实现对应的Backend和Adapter类
3. **解耦合**: 客户端代码与具体后端实现解耦
4. **可维护性**: 每个后端的实现独立，便于维护和测试

## 扩展新后端

要添加新的推理后端（如ONNX Runtime），需要：

1. 创建`OnnxBackend`类，实现特有的推理接口
2. 创建`OnnxFaceAdapter`类，适配到统一接口
3. 在`FaceInferenceEngine::BackendType`中添加新的枚举值
4. 在工厂方法中添加对应的创建逻辑

## 注意事项

- 所有类都使用了智能指针管理内存
- 使用了C++14标准
- 添加了详细的中文注释
- 遵循了现代C++的最佳实践 