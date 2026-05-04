#include <iostream>
#include "Label.h"
#include "cstr.h"
using namespace std;
namespace seneca {
    Label::Label(const char* text, char fill) {
        m_fill = fill;
        if (text) {
            m_text = new char[(strlen(text)>60?60:strlen(text)) + 1];
            strcpy(m_text, text, 60);
        }
    }


    ostream& Label::print(ostream& ostr) const{
        int len = m_text ? strlen(m_text)+4 : 0;
        if (len) {
            for (int i = 0; i < len; ostr << m_fill, i++);
            ostr << endl  <<  m_fill<< " "  << m_text << " " <<  m_fill << endl;
            for (int i = 0; i < len; ostr << m_fill, i++);
            ostr << endl;
        }
        return ostr;
    }
}
