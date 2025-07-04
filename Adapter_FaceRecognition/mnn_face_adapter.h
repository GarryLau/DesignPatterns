#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "face_inference_engine.h"
#include "mnn_backend.h"

/**
 * @brief MNN人脸推理适配器
 * 
 * 这是Adapter模式中的Adapter类，将MNN后端适配到统一的FaceInferenceEngine接口。
 * 客户端通过这个适配器可以统一使用MNN后端的推理功能。
 */
class MnnFaceAdapter : public FaceInferenceEngine {
public:
    /**
     * @brief 构造函数
     * 
     * 创建MNN后端实例并初始化
     */
    MnnFaceAdapter() {
        std::cout << "MnnFaceAdapter constructor called.\n";
        mnn_backend_ = std::make_unique<MnnBackend>();
    }
    
    /**
     * @brief 析构函数
     */
    ~MnnFaceAdapter() {
        std::cout << "MnnFaceAdapter destructor called.\n";
    }

    /**
     * @brief 预处理适配实现
     * 
     * 将统一的预处理接口适配到MNN特有的预处理方法
     */
    void preprocess() override {
        std::cout << "MnnFaceAdapter preprocess called.\n";
        mnn_backend_->mnnPreprocess();
    }
    
    /**
     * @brief 推理适配实现
     * 
     * 将统一的推理接口适配到MNN特有的推理方法
     */
    void inference() override {
        std::cout << "MnnFaceAdapter inference called.\n";
        mnn_backend_->mnnInference();
    }
    
    /**
     * @brief 后处理适配实现
     * 
     * 将统一的后处理接口适配到MNN特有的后处理方法
     */
    void postprocess() override {
        std::cout << "MnnFaceAdapter postprocess called.\n";
        mnn_backend_->mnnPostprocess();
    }
    
    /**
     * @brief 加载MNN模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        mnn_backend_->loadModel(model_path);
    }

private:
    std::unique_ptr<MnnBackend> mnn_backend_;  ///< MNN后端实例
}; 