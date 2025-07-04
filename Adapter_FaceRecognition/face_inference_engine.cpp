#include <iostream>
#include <memory>

#include "face_inference_engine.h"
#include "mnn_face_adapter.h"
#include "rknn_face_adapter.h"
#include "tensorrt_face_adapter.h"

/**
 * @brief 工厂方法实现：根据后端类型创建对应的推理引擎实例
 * 
 * @param backend_type 后端类型
 * @return std::shared_ptr<FaceInferenceEngine> 推理引擎实例
 */
std::shared_ptr<FaceInferenceEngine> FaceInferenceEngine::createInstance(BackendType backend_type) {
    switch (backend_type) {
        case BackendType::MNN:
            return std::make_shared<MnnFaceAdapter>();
        case BackendType::RKNN:
            return std::make_shared<RknnFaceAdapter>();
        case BackendType::TENSORRT:
            return std::make_shared<TensorrtFaceAdapter>();
        default:
            std::cerr << "Unsupported backend type!" << std::endl;
            return nullptr;
    }
} 