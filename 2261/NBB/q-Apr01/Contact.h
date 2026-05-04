#pragma once
#include "Name.h"
class Contact :
    public Name {
    char* m_address{};
public:
    Contact(const char* name, const char* address);
    Contact(const Contact& other);
    Contact& operator=(const Contact& other);
    ~Contact();
    const char* get()const;
    virtual std::istream& read(std::istream& istr = std::cin);
    virtual std::ostream& print(std::ostream& ostr = std::cout);
};

