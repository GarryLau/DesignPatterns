#pragma once

#include <iostream>
#include <string>

class Photo
{
public:
    Photo(std::string title) : m_title(title) {
        std::cout << "Processing Photo: " << m_title << std::endl;
    }
private:
    std::string m_title;
};