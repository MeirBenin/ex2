#pragma once
#include <vector>
#include <memory>
#include <cmath>
#include <iostream>
#include "NumToStr.h"
//==================================================
//--------------------------------------------------
class Func{
public:
    void calculate(double x){
        std::cout << expretion(numToString(x)) << " = " << eval(x) << std::endl;
    }
    virtual double eval(double x)=0;
    virtual std::string expretion(std::string) = 0;
protected:
     
};
