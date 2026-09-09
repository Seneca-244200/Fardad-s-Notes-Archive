#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;
namespace seneca {
    void Student::displayStno()const {
        cout << "(" << m_stno << ")";
    }
    void Student::read() {
        cout << "Name: ";
        cin >> m_name;
        cout << "Student number: ";
        cin >> m_stno;
    }
    void Student::setPrg(const char* program) {
        strcpy(m_program, program);
    }

    void Student::set(const char* name, size_t stno) {
        strcpy(m_name, name);
        m_stno = stno;
    }
    void Student::display()const { // read only method
        cout << m_name;
        displayStno();
        cout << " enroled in " << m_program << endl;
        //m_stno = 0; this will cause error
    }
    // helper funciton, they are function written to work with a specific class
    void formatStudent(const Student& S) {
        cout << "-------------------------------------------" << endl;
        S.display();
        cout << "-------------------------------------------" << endl;
    }




}