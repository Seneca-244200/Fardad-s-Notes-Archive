#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace seneca {
    Name::~Name() {
        freeMem();
    }
    void Name::set(const char* first, const char* last) {
        delete[] m_first;
       // m_first = nullptr;
        m_first = new char[strlen(first)+1];
        delete[] m_last;
       // m_last = nullptr
        m_last = new char[strlen(last)+1];
        strcpy(m_first, first);
        strcpy(m_last, last);
    }

    void Name::display() const {
        if (m_first && m_last) {
            cout << m_first << " " << m_last;
        }
        else {
            cerr << "Critical Error: Invalid Name" << endl;
        }
    }

    void Name::freeMem() {
        delete[] m_first;
        delete[] m_last;
    }

    Name::Name() {
        set("No", "Name");
    }

    Name::Name(const char* first, const char* last) {
        set(first, last);
    }

}