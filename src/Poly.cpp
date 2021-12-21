

#include "Poly.h"
//==================================================

//--------------------------------------------------
Poly::Poly(std::vector<double> vec):m_poly(vec){
    
}

//--------------------------------------------------

double Poly::eval(double x){
    double sum = 0;
    for (int i = 0; i < m_poly.size(); i++){
        sum += (m_poly[i]*pow(x, i));
    }
    return sum;
}

//--------------------------------------------------

std::string Poly::expretion(std::string argoment){
    auto expretion = std::string();
    
    for (int i = (int)m_poly.size() - 1; i >= 0; i--) {
        if (m_poly[i] != 0) {
            if (expretion != "")expretion += std::string(" + ");
            expretion += numToString(m_poly[i]);
            expretion += std::string("*");
            expretion += argoment;
            expretion += std::string("^");
            expretion += numToString(i);
        }
    }
    return expretion;
}
