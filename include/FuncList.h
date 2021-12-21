#pragma once

#include <vector>
#include <memory>
#include <iomanip>
#include <string.h>
#include <iostream>
#include "Sin.h"
#include "Lan.h"
#include "Func.h"
#include "Poly.h"
#include "Log.h"
#include "Add.h"
#include "Mul.h"
#include "Comp.h"

const int NAME_LONG = 10;


enum Comand{EROR, EVAL, POLY, LOG, ADD, MUL, COMP, HLPE, DEL, EXIT};
//==================================================
//--------------------------------------------------
class FuncList{
public:
    FuncList();
    void userMenu();
private:
    void addFunc(std::shared_ptr<Func>);
    void deltFunc(int);
    void printList();
    Comand getComand();
    bool getLegalFuceNum(int&);
    bool getLegalFuceNum(int&, int&);
    bool isLegal(int);
    void argomentErorr();
    std::vector<double> readVec(int);
    void printHelp();
    //////////////////////////////////////////////////////////////////////////////////////////
    std::vector<std::shared_ptr<Func> > m_list;
};
