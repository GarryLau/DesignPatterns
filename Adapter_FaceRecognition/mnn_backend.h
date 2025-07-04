#pragma once

#include <iostream>
#include <string>

/**
 * @brief MNN推理后端具体实现类
 * 
 * 这是Adapter模式中的Adaptee类，提供了MNN特有的推理接口。
 * 客户端无法直接使用这个类，需要通过Adapter进行适配。
 */
class MnnBackend {
public:
    /**
     * @brief 构造函数
     */
    MnnBackend() {
        std::cout << "MnnBackend constructor called.\n";
    }
    
    /**
     * @brief 析构函数
     */
    ~MnnBackend() {
        std::cout << "MnnBackend destructor called.\n";
    }

    /**
     * @brief MNN特有的预处理方法
     * 
     * 执行MNN框架特有的数据预处理操作
     */
    void mnnPreprocess() {
        std::cout << "MnnBackend mnnPreprocess called.\n";
    }
    
    /**
     * @brief MNN特有的推理方法
     * 
     * 使用MNN框架执行人脸识别推理
     */
    void mnnInference() {
        std::cout << "MnnBackend mnnInference called.\n";
    }
    
    /**
     * @brief MNN特有的后处理方法
     * 
     * 对MNN推理结果进行后处理
     */
    void mnnPostprocess() {
        std::cout << "MnnBackend mnnPostprocess called.\n";
    }
    
    /**
     * @brief 加载MNN模型
     * 
     * @param model_path 模型文件路径
     */
    void loadModel(const std::string& model_path) {
        std::cout << "MnnBackend loading model from: " << model_path << std::endl;
    }
}; 