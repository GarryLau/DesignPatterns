#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "face_inference_engine.h"
#include "tensorrt_backend.h"

/**
 * @brief TensorRT人脸推理适配器
 * 
 * 这是Adapter模式中的Adapter类，将TensorRT后端适配到统一的FaceInferenceEngine接口。
 * 客户端通过这个适配器可以统一使用TensorRT后端的推理功能。
 */
class TensorrtFaceAdapter : public FaceInferenceEngine {
public:
    /**
     * @brief 构造函数
     * 
     * 创建TensorRT后端实例并初始化
     */
    TensorrtFaceAdapter() {
        std::cout << "TensorrtFaceAdapter constructor called.\n";
        tensorrt_backend_ = std::make_unique<TensorrtBackend>();
    }
    
    /**
     * @brief 析构函数
     */
    ~TensorrtFaceAdapter() {
        std::cout << "TensorrtFaceAdapter destructor called.\n";
    }

    /**
     * @brief 预处理适配实现
     * 
     * 将统一的预处理接口适配到TensorRT特有的预处理方法
     */
    void preprocess() override {
        std::cout << "TensorrtFaceAdapter preprocess called.\n";
        tensorrt_backend_->tensorrtPreprocess();
    }
    
    /**
     * @brief 推理适配实现
     * 
     * 将统一的推理接口适配到TensorRT特有的推理方法
     */
    void inference() override {
        std::cout << "TensorrtFaceAdapter inference called.\n";
        tensorrt_backend_->tensorrtInference();
    }
    
    /**
     * @brief 后处理适配实现
     * 
     * 将统一的后处理接口适配到TensorRT特有的后处理方法
     */
    void postprocess() override {
        std::cout << "TensorrtFaceAdapter postprocess called.\n";
        tensorrt_backend_->tensorrtPostprocess();
    }
    
    /**
     * @brief 加载TensorRT模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        tensorrt_backend_->loadModel(model_path);
    }

private:
    std::unique_ptr<TensorrtBackend> tensorrt_backend_;  ///< TensorRT后端实例
}; 