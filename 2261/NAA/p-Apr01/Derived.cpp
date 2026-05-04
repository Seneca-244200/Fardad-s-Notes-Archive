#include "Derived.h"
#include "cstr.h"
Derived::Derived(const char* label, int value):Base(value) {
    if (label) {
        seneca::strcpy(m_label, label, 40);
    }
}

std::ostream& Derived::print(std::ostream& ostr) const {
    if (m_label[0]) {
        ostr << m_label << ": ";
    }
    Base::print(ostr);
    return ostr;
}

std::istream& Derived::read(std::istream& istr) {
    istr.getline(m_label, 41, ':');
    Base::read(istr);
    return istr;
}
