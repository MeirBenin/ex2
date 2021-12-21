
#include "Log.h"

//==================================================
//--------------------------------------------------
double Log::eval(double x){
    return std::log(m_func -> eval(x))/log(m_base);
}
//--------------------------------------------------
std::string Log::expretion(std::string argoment){
    return  std::string("log" + numToString(m_base) + "(" + m_func -> expretion(argoment) + ")");
}
