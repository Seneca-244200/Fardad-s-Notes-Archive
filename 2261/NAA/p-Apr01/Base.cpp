#include "Base.h"

Base::Base(int data) {
    m_data = new int(data);
}

Base::Base(const Base& other) {
    // lazy but quick
    // operator=(other); or next line
    // *this = other;
    if (other) {// if the other's data is not null
        //m_data = new int;
        //*m_data = *other.m_data;
        m_data = new int(*other.m_data);
    }
}

Base& Base::operator=(const Base& other) {
    if (this != &other) {
        delete m_data;
        m_data = nullptr;
        if (other) {
            m_data = new int(*other.m_data);
        }
    }
    return *this;
}

Base& Base::operator=(int value) {
    delete m_data;
    m_data = new int(value);
    return *this;
}

Base::~Base() {
    delete m_data;
}

Base::operator bool() const {
    return m_data != nullptr;
}
//// following the rule of having one return statement in a functiuon
//int Base::getInt() const {
//    int value = -1; // some default garbage value
//    int* safe = &value;
//    if (m_data) { // if the data exist
//        safe = m_data;
//    }
//    return *safe;// returns the int value safely by returning zero if m_data is nullptr
//}

int Base::getInt() const {
    if (m_data) {
        return *m_data;
    }
    else {
        return 0;
    }
}

std::ostream& Base::print(std::ostream& ostr) const{
    if (*this)
        ostr << *m_data;
    else
        ostr << "Empty";
    return ostr;
}

std::istream& Base::read(std::istream& istr) {
    int buffer{};
    istr >> buffer;
    if (istr) {
        delete m_data;
        m_data = new int(buffer);
    }
    return istr;
}

std::ostream& operator<<(std::ostream& ostr, const Base& B) {
    return B.print(ostr);
}

std::istream& operator>>(std::istream& istr, Base& B) {
    return B.read(istr);
}
