
#include "Comp.h"
//==================================================
//--------------------------------------------------
double Comp::eval(double x){
    return m_func1 -> eval(m_func2 -> eval(x));
}
//--------------------------------------------------
std::string Comp::expretion(std::string argoment){
    return std::string(m_func1->expretion(std::string("("+m_func2->expretion(argoment)+")")));
}
