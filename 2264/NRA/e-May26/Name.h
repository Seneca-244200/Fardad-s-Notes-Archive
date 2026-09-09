#pragma once
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
    class Name {
        char* m_first{}; //C++ member variable, (OOP: attributes)
        char* m_last{};
        void freeMem();
    public:
        Name(); // default or no argument constructor
        Name(const char* first, const char* last);
        ~Name();
        void set(const char* first, const char* last);
        void display()const;// C++ memeber function (OOP: method)
    };
}
#endif // !SENECA_NAME_H


