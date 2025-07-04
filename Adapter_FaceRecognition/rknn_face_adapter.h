#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "face_inference_engine.h"
#include "rknn_backend.h"

/**
 * @brief RKNN人脸推理适配器
 * 
 * 这是Adapter模式中的Adapter类，将RKNN后端适配到统一的FaceInferenceEngine接口。
 * 客户端通过这个适配器可以统一使用RKNN后端的推理功能。
 */
class RknnFaceAdapter : public FaceInferenceEngine {
public:
    /**
     * @brief 构造函数
     * 
     * 创建RKNN后端实例并初始化
     */
    RknnFaceAdapter() {
        std::cout << "RknnFaceAdapter constructor called.\n";
        rknn_backend_ = std::make_unique<RknnBackend>();
    }
    
    /**
     * @brief 析构函数
     */
    ~RknnFaceAdapter() {
        std::cout << "RknnFaceAdapter destructor called.\n";
    }

    /**
     * @brief 预处理适配实现
     * 
     * 将统一的预处理接口适配到RKNN特有的预处理方法
     */
    void preprocess() override {
        std::cout << "RknnFaceAdapter preprocess called.\n";
        rknn_backend_->rknnPreprocess();
    }
    
    /**
     * @brief 推理适配实现
     * 
     * 将统一的推理接口适配到RKNN特有的推理方法
     */
    void inference() override {
        std::cout << "RknnFaceAdapter inference called.\n";
        rknn_backend_->rknnInference();
    }
    
    /**
     * @brief 后处理适配实现
     * 
     * 将统一的后处理接口适配到RKNN特有的后处理方法
     */
    void postprocess() override {
        std::cout << "RknnFaceAdapter postprocess called.\n";
        rknn_backend_->rknnPostprocess();
    }
    
    /**
     * @brief 加载RKNN模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        rknn_backend_->loadModel(model_path);
    }

private:
    std::unique_ptr<RknnBackend> rknn_backend_;  ///< RKNN后端实例
}; 