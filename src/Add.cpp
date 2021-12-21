
#include "Add.h"
//==================================================
//--------------------------------------------------
double Add::eval(double x){
    return m_func1 -> eval(x) + m_func2 -> eval(x) ;
}
//--------------------------------------------------
std::string Add::expretion(std::string argoment){
    return std::string("(" + m_func1 -> expretion(argoment) + ")+(" + m_func2->expretion(argoment) + ")");
}

