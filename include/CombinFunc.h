#pragma once
#include "Func.h"
//==================================================
//--------------------------------------------------
class CombinFunc :public Func {
public:
    CombinFunc(const std::shared_ptr<Func>& a1, const std::shared_ptr<Func>& a2):m_func1(a1),m_func2(a2){}
    //virtual ~CombinFunc() =0;
protected:
    std::shared_ptr<Func> m_func1;
    std::shared_ptr<Func> m_func2;
};
