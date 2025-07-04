#pragma once

#include <iostream>
#include <string>

/**
 * @brief TensorRT推理后端具体实现类
 * 
 * 这是Adapter模式中的Adaptee类，提供了TensorRT特有的推理接口。
 * 客户端无法直接使用这个类，需要通过Adapter进行适配。
 */
class TensorrtBackend {
public:
    /**
     * @brief 构造函数
     */
    TensorrtBackend() {
        std::cout << "TensorrtBackend constructor called.\n";
    }
    
    /**
     * @brief 析构函数
     */
    ~TensorrtBackend() {
        std::cout << "TensorrtBackend destructor called.\n";
    }

    /**
     * @brief TensorRT特有的预处理方法
     * 
     * 执行TensorRT框架特有的数据预处理操作
     */
    void tensorrtPreprocess() {
        std::cout << "TensorrtBackend tensorrtPreprocess called.\n";
    }
    
    /**
     * @brief TensorRT特有的推理方法
     * 
     * 使用TensorRT框架执行人脸识别推理
     */
    void tensorrtInference() {
        std::cout << "TensorrtBackend tensorrtInference called.\n";
    }
    
    /**
     * @brief TensorRT特有的后处理方法
     * 
     * 对TensorRT推理结果进行后处理
     */
    void tensorrtPostprocess() {
        std::cout << "TensorrtBackend tensorrtPostprocess called.\n";
    }
    
    /**
     * @brief 加载TensorRT模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        std::cout << "TensorrtBackend loading model from: " << model_path << std::endl;
    }
}; 