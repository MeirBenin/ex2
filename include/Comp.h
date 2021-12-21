
#pragma once
#include "CombinFunc.h"
//==================================================
//--------------------------------------------------
class Comp :public CombinFunc {
public:
    Comp(const std::shared_ptr<Func>& a1, const std::shared_ptr<Func>& a2):CombinFunc(a1,a2)
    {}
    double eval(double);
    std::string expretion(std::string);
};
