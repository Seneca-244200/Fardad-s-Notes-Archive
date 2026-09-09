#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Title.h"
using namespace std;
namespace seneca {
    Title::Title(const char* text) {
        m_text = new char[strlen(text)+1]; // +1 to accomodate the null termination
        strcpy(m_text, text);
    }
    Title::~Title() {
        delete[] m_text;
    }
    void Title::display() const {
        cout << m_text;
    }
}