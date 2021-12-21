
#pragma once
#include "Func.h"
#include "NumToStr.h"
//==================================================
//--------------------------------------------------
class Log :public Func {
public:
    Log( double base,std::shared_ptr<Func>& func):m_base(base),m_func(func){}
    double eval(double);
    std::string expretion(std::string);
private:
    int m_base;
    std::shared_ptr<Func> m_func;
};

