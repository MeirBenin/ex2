

#include "NumToStr.h"

std::string numToString(double num)
{
    auto tempStream  = std::stringstream();
    tempStream << num;
    return tempStream.str();
}

