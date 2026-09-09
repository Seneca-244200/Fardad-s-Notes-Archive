#pragma once
#ifndef SENECA_STUDENT_H
#define SENECA_STUDENT_H
namespace seneca {
    class Student {
    private:
        char m_name[51];
        char m_program[21];
        size_t m_stno;
        void displayStno()const;
    public:
        void read();
        void setPrg(const char* program);
        void set(const char* name, size_t stno);
        void display()const;
    };
    // helper function prototype
    void formatStudent(const Student& S);
}
#endif // !SENECA_STUDENT_H


