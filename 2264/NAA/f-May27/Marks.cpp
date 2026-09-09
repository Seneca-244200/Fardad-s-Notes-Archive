#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Marks.h"
using namespace std;
namespace seneca {
    void Marks::init() {
        m_marks = nullptr;
        m_nom = 0;
    }
    void Marks::freeMem() {
        delete[] m_marks;
        m_nom = 0;
    }
    Marks::Marks(){// default or no arg costructor
        init();
    }
    Marks::Marks(const char* title):m_title(title) {
        init();
    }
    Marks::~Marks() {
        freeMem();
    }
    void Marks::addMark(int value) {
        if (m_nom < 40) {
            if (m_marks == nullptr) { // Empty marks, this is the first
                m_marks = new int[1];
                m_nom = 1;
            }
            else {
                int* temp = new int[m_nom + 1]; //  1- allocate new size
                for (int i = 0; i < m_nom; i++) {// copy old memory to new one (temp one)
                    temp[i] = m_marks[i];
                }
                m_nom++; // update the size
                delete[] m_marks; // delete the old
                m_marks = temp; // make the data pointer point to new memory 
                // I have all the data plus one more element that is at the end and not set to anything yet 
            }
            m_marks[m_nom - 1] = value;
        }
    }

    void Marks::print()const {
        m_title.display();
        cout << endl;
        for (int i = 0; i < m_nom; i++) {
            cout << m_marks[i];
            if (i != m_nom - 1) {
                cout << ", ";
            }
        }
        cout << endl;
        //m_nom = 23; not possible since print is const
    }

}