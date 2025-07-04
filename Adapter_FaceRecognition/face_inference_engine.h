#pragma once

#include <iostream>
#include <memory>

/**
 * @brief 人脸推理引擎抽象接口
 * 
 * 定义了人脸推理的标准接口，包括预处理、推理和后处理三个步骤。
 * 这是Adapter模式中的Target接口。
 */
class FaceInferenceEngine {
public:
    /**
     * @brief 推理后端类型枚举
     */
    enum class BackendType {
        MNN,        ///< MNN推理后端
        RKNN,       ///< RKNN推理后端  
        TENSORRT,   ///< TensorRT推理后端
    };

public:
    /**
     * @brief 构造函数
     */
    FaceInferenceEngine() {
        std::cout << "FaceInferenceEngine constructor called.\n";
    }
    
    /**
     * @brief 虚析构函数
     */
    virtual ~FaceInferenceEngine() {
        std::cout << "FaceInferenceEngine destructor called.\n";
    }

    /**
     * @brief 预处理接口
     * 
     * 负责输入数据的预处理，包括图像缩放、归一化等操作
     */
    virtual void preprocess() = 0;
    
    /**
     * @brief 推理接口
     * 
     * 执行实际的人脸识别推理计算
     */
    virtual void inference() = 0;
    
    /**
     * @brief 后处理接口
     * 
     * 对推理结果进行后处理，包括特征提取、相似度计算等
     */
    virtual void postprocess() = 0;

    /**
     * @brief 工厂方法：创建推理引擎实例
     * 
     * @param backend_type 后端类型
     * @return std::shared_ptr<FaceInferenceEngine> 推理引擎实例
     */
    static std::shared_ptr<FaceInferenceEngine> createInstance(BackendType backend_type);
}; 