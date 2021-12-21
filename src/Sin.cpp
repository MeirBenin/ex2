
#include "Sin.h"
//==================================================
//--------------------------------------------------
double Sin::eval(double x){
    return std::sin(x);
}
//--------------------------------------------------
std::string Sin::expretion(std::string argoment){
    return  std::string("sin(" +argoment+ ")");
}
