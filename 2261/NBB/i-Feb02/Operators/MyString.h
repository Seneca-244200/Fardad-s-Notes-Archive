#ifndef SENECA_MYSTRING_H
#define SENECA_MYSTRING_H
#include <iostream>
// using namespace std; you are never allowed to use a namespace in headerfile
namespace seneca{
    const int MAX_STRING_SIZE = 4095;
    class MyString {
    private:
       char m_data[MAX_STRING_SIZE + 1]{};
    public:
       MyString() = default;
       MyString(const char* str);
       ~MyString() = default;
       std::ostream& display(std::ostream& ostr = std::cout) const;
       std::istream& read(std::istream& istr = std::cin);
       int length() const;  //<< we have forgot to implement lenght!!!!
       MyString& operator+=(const MyString& other);
       MyString& operator=(const char* c_str);
       MyString operator+(const MyString& other) const;
       MyString& operator++();
       MyString& operator++(int);
       char& operator[](int index);
       const char& operator[](int index) const;
       operator const char* () const;
    };

}
#endif // !SENECA_MYSTRING_H


