
#include "Lan.h"
//==================================================
//--------------------------------------------------
double Lan::eval(double x){
    return std::log(x);
}
//--------------------------------------------------
std::string Lan::expretion(std::string argoment){
    return  std::string("lan(" +argoment+ ")");
}
