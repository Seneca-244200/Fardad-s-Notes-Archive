#pragma once
#include "Base.h"
class Derived :
    public Base {
    char m_label[41]{};
public:
    Derived(const char* lable=nullptr, int value = 0);
    virtual std::ostream& print(std::ostream& ostr = std::cout)const;
    virtual std::istream& read(std::istream& istr = std::cin);
};

