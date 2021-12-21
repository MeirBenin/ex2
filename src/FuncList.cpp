
#include "FuncList.h"

//==================================================
//--------------------------------------------------

void FuncList::userMenu(){
    int funcNum, funcNum2 ,n;
    while (true) {
        std::cout << "This is the function list:" <<std::endl;
        printList();
        std::cout << "Please enter a command (""help"" for command list):" << std::endl;
        switch (getComand()) {
            case EVAL:
                if(getLegalFuceNum(funcNum)){
                    double x;
                    std::cin >> x;
                    m_list[funcNum]->calculate(x);
                }
                else
                    argomentErorr();
                break;
            case POLY:
                std::cin >> n;
                if (n > 0)
                    addFunc(std::make_shared<Poly>(readVec(n)));
                else
                    argomentErorr();
                break;
            case LOG:
                std::cin >> n;
                if (n != 1 && n >= 0 &&
                    getLegalFuceNum(funcNum))
                    addFunc(std::make_shared<Log>(n,m_list[funcNum]));
                else
                    argomentErorr();
                break;
            case ADD:
                if(getLegalFuceNum(funcNum,funcNum2))
                    addFunc(std::make_shared<Add>(m_list[funcNum],m_list[funcNum2]));
                else
                    argomentErorr();
                break;
            case MUL:
                if(getLegalFuceNum(funcNum,funcNum2))
                    addFunc(std::make_shared<Mul>(m_list[funcNum],m_list[funcNum2]));
                else
                    argomentErorr();
                break;
            case COMP:
                if(getLegalFuceNum(funcNum,funcNum2))
                    addFunc(std::make_shared<Comp>(m_list[funcNum],m_list[funcNum2]));
                else
                    argomentErorr();
                break;
            case HLPE:
                printHelp();
                break;
            case DEL:
                if(getLegalFuceNum(funcNum))
                    deltFunc(funcNum);
                else
                    argomentErorr();
                break;
            case EXIT:
                std::cout <<"good bay"<< std::endl;
                exit(0);
                break;
            case EROR:
                std::cout <<"erorr"<< std::endl;
                break;
        }
    }
}
//--------------------------------------------------
FuncList::FuncList() {
    m_list.push_back(std::make_shared<Sin>());
    m_list.push_back(std::make_shared<Lan>());
}
//--------------------------------------------------
void FuncList::addFunc(std::shared_ptr<Func> newFunc){
    m_list.push_back(newFunc);
}
//--------------------------------------------------
void FuncList::deltFunc(int n){
    m_list.erase(m_list.begin()+(n-1));
}
//--------------------------------------------------
void FuncList::printList(){
    for (int i = 0; i < m_list.size(); i++) {
        std::cout << i <<":" <<m_list[i]->expretion("x") << std::endl;
    }
}
//--------------------------------------------------
Comand FuncList::getComand(){
    char comandName [NAME_LONG];
    std::cin >> std::setw(NAME_LONG) >> comandName;
    std::cin.get();//for white space
    if (strcmp(comandName,"eval") == 0) return EVAL;
    if (strcmp(comandName,"poly") == 0) return POLY;
    if (strcmp(comandName,"log") == 0)  return LOG;
    if (strcmp(comandName,"add") == 0)  return ADD;
    if (strcmp(comandName,"mul") == 0)  return MUL;
    if (strcmp(comandName,"comp") == 0) return COMP;
    if (strcmp(comandName,"hlpe") == 0) return HLPE;
    if (strcmp(comandName,"del") == 0)  return DEL;
    if (strcmp(comandName,"exit") == 0) return EXIT;
    
    return EROR;
    
}

//--------------------------------------------------
bool FuncList::getLegalFuceNum(int &funcNum,int &funcNum2){
    if(getLegalFuceNum(funcNum)&&
       getLegalFuceNum(funcNum2))
        return true;
    return false;
}
//--------------------------------------------------
bool FuncList::getLegalFuceNum(int &funcNum){
    std::cin >> funcNum;
    if(!isLegal(funcNum))
        return false;
    return true;
}
//--------------------------------------------------
bool FuncList::isLegal(int funcNum){
    
    if(funcNum >= 0 &&
       funcNum < m_list.size())
        return true;
    return false;
}
//--------------------------------------------------
void FuncList::argomentErorr(){
std::cout << "----argoment erorr----"<<std::endl;
std::string temp;
std::getline (std::cin,temp);//clean the input buffer
}

//--------------------------------------------------
//--------------------------------------------------
std::vector<double> FuncList::readVec(int n){
    double num;
    std::vector<double> vec;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        vec.push_back(num);
    }
    return vec;
}




//--------------------------------------------------
void FuncList::printHelp(){
    std::cout << "Following is the list of the calculator's available commands:\n"<<
    "eval(uate) num x - Evaluates function #num on x \n"<<
    "poly(nomial) N c0 c1 ... cN-1 - Creates a polynomial with N coefficients\n"<<
    "mul(tiply) num1 num2 - Creates a function that is the multiplication of function #num1 and function #num2\n"<<
    "add num1 num2 - Creates a function that is the sum of function #num1 and function #num2 \n"<<
    "comp(osite) num1 num2 - Creates a function that is the composition of function #num1 and function #num2\n"<<
    "log N num - Creates a function that computes log N of function #num\n"<<
    "del(ete) num - Deletes function #num from function list" << std::endl;
}
