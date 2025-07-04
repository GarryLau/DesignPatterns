#pragma once

#include <iostream>
#include <string>

/**
 * @brief RKNN推理后端具体实现类
 * 
 * 这是Adapter模式中的Adaptee类，提供了RKNN特有的推理接口。
 * 客户端无法直接使用这个类，需要通过Adapter进行适配。
 */
class RknnBackend {
public:
    /**
     * @brief 构造函数
     */
    RknnBackend() {
        std::cout << "RknnBackend constructor called.\n";
    }
    
    /**
     * @brief 析构函数
     */
    ~RknnBackend() {
        std::cout << "RknnBackend destructor called.\n";
    }

    /**
     * @brief RKNN特有的预处理方法
     * 
     * 执行RKNN框架特有的数据预处理操作
     */
    void rknnPreprocess() {
        std::cout << "RknnBackend rknnPreprocess called.\n";
    }
    
    /**
     * @brief RKNN特有的推理方法
     * 
     * 使用RKNN框架执行人脸识别推理
     */
    void rknnInference() {
        std::cout << "RknnBackend rknnInference called.\n";
    }
    
    /**
     * @brief RKNN特有的后处理方法
     * 
     * 对RKNN推理结果进行后处理
     */
    void rknnPostprocess() {
        std::cout << "RknnBackend rknnPostprocess called.\n";
    }
    
    /**
     * @brief 加载RKNN模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        std::cout << "RknnBackend loading model from: " << model_path << std::endl;
    }
}; 