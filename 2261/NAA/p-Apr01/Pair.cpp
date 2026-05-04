#include "Pair.h"

Pair::Pair(double dvalue, int ivalue):Base(ivalue) {
    m_data = new double(dvalue);
}
//
//Pair::Pair(const Pair& other) {
//    operator=(other); // for this Base must have a default contructor
//}

// workaround to reuse your operator= when you don't have a default constructor
//Pair::Pair(const Pair& other):Base(0) {
//       operator=(other); 
//}


Pair::Pair(const Pair& other):Base(other) {
    if (other) {
        m_data = new double(*other.m_data);
    }
}

//in copy construction of the derived class you have a choice to 
// bulid the base class in anyway, not only copying
//Pair::Pair(const Pair& other) :Base(other.getInt()) {
//    if (other) {
//        m_data = new double(*other.m_data);
//    }
//}

Pair& Pair::operator=(const Pair& other) {
    if (this != &other) {
        Base::operator=(other);// will take care of the copying of the Base part
        // the rest will copy the derived (Pair)
        delete m_data;
        m_data = nullptr;
        if (other) {
            m_data = new double(*other.m_data);
        }
    }
    return *this;
}

Pair::operator bool() const {
    return m_data != nullptr && Base::operator bool();
}

Pair::~Pair() {
    delete m_data;
}
