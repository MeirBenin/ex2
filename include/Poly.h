

#pragma once
#include "Func.h"
#include "NumToStr.h"
//==================================================
//--------------------------------------------------
class Poly :public Func {
public:
    Poly(std::vector<double>);
    double eval(double);
    std::string expretion(std::string);
private:
    std::vector<double> m_poly;
};
