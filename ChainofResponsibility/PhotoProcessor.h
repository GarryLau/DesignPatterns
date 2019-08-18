#pragma once

#include "Photo.h"

class PhotoProcessor
{
public:
    PhotoProcessor() : m_next_processor(nullptr) {
        std::cout << "PhotoProcessor constructor called." << std::endl;
    }
    virtual ~PhotoProcessor() = default;
    void Process(Photo &photo) {
        processImplementation(photo);
        if (m_next_processor != nullptr) {
            m_next_processor->Process(photo);
        }
    }
    void setNextProcessor(PhotoProcessor *photo_processor) {
        m_next_processor = photo_processor;
    }
protected:
    virtual void processImplementation(Photo &photo) = 0;
private:
    PhotoProcessor *m_next_processor;
};

class Scale : public PhotoProcessor
{
private:
    void processImplementation(Photo &photo) override {
            std::cout << "Scaling photo." << std::endl;
        }
};

class RedEye : public PhotoProcessor
{
private:
    void processImplementation(Photo &photo) override {
        std::cout << "Removing red eye." << std::endl;
    }
};

class Filter : public PhotoProcessor
{
private:
    void processImplementation(Photo &photo) override {
        std::cout << "Filtering photo." << std::endl;
    }
};

class ColorMatch : public PhotoProcessor
{
private:
    void processImplementation(Photo &photo) override {
        std::cout << "Matching colors." << std::endl;
    }
};

