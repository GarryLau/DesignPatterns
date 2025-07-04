#include <iostream>
#include <memory>
#include <string>

#include "face_inference_engine.h"

/**
 * @brief 人脸识别演示程序
 * 
 * 演示如何使用重构后的Adapter模式进行人脸识别推理
 */
int main() {
    std::cout << "=== 人脸识别推理演示程序 ===" << std::endl;
    std::cout << "使用Adapter模式统一不同推理后端的接口" << std::endl << std::endl;

    // 测试MNN后端
    std::cout << "1. 测试MNN推理后端:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    auto mnn_engine = FaceInferenceEngine::createInstance(FaceInferenceEngine::BackendType::MNN);
    if (mnn_engine) {
        // 可以加载模型
        // mnn_engine->loadModel("models/face_recognition_mnn.mnn");
        
        // 执行推理流程
        mnn_engine->preprocess();
        mnn_engine->inference();
        mnn_engine->postprocess();
    }
    std::cout << std::endl;

    // 测试RKNN后端
    std::cout << "2. 测试RKNN推理后端:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    auto rknn_engine = FaceInferenceEngine::createInstance(FaceInferenceEngine::BackendType::RKNN);
    if (rknn_engine) {
        // 可以加载模型
        // rknn_engine->loadModel("models/face_recognition_rknn.rknn");
        
        // 执行推理流程
        rknn_engine->preprocess();
        rknn_engine->inference();
        rknn_engine->postprocess();
    }
    std::cout << std::endl;

    // 测试TensorRT后端
    std::cout << "3. 测试TensorRT推理后端:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    auto tensorrt_engine = FaceInferenceEngine::createInstance(FaceInferenceEngine::BackendType::TENSORRT);
    if (tensorrt_engine) {
        // 可以加载模型
        // tensorrt_engine->loadModel("models/face_recognition_tensorrt.engine");
        
        // 执行推理流程
        tensorrt_engine->preprocess();
        tensorrt_engine->inference();
        tensorrt_engine->postprocess();
    }
    std::cout << std::endl;

    std::cout << "=== 演示完成 ===" << std::endl;
    std::cout << "通过Adapter模式，客户端代码可以统一使用不同的推理后端，无需关心具体后端的实现细节。" << std::endl;

    return 0;
} 