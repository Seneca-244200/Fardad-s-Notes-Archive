#pragma once
#include <iostream>
class Base {
    int* m_data{ }; //= nullptr
public:
    Base() = default;
    Base(int data);
    // rule of three, since m_data is dynamic (resource)
    Base(const Base& other);
    Base& operator=(const Base& other);
    Base& operator=(int value);
    virtual ~Base();
    virtual operator bool() const;
    int getInt()const;
    virtual std::ostream& print(std::ostream& ostr = std::cout)const;
    virtual std::istream& read(std::istream& istr = std::cin);
};

std::ostream& operator<<(std::ostream& ostr, const Base& B);
std::istream& operator>>(std::istream& istr, Base& B);