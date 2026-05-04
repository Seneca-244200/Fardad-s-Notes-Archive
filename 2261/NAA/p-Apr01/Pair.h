#pragma once
#include "Base.h"
class Pair :
    public Base {
    double* m_data{};
public:
    Pair() = default;
    Pair(double dvalue, int ivalue);
    Pair(const Pair& other);
    Pair& operator=(const Pair& other);
    virtual operator bool() const;
    ~Pair();
    virtual std::ostream& print(std::ostream& ostr = std::cout)const;
    virtual std::istream& read(std::istream& istr = std::cin);

};

