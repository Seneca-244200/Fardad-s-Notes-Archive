#include "cstr.h"
#include "Contact.h"

Contact::Contact(const char* name, const char* address):Name(name) {
    if (address) {
        m_address = new char[seneca::strlen(address) + 1];
        seneca::strcpy(m_address, address);
    }
}

Contact::Contact(const Contact& other):Name(nullptr) {
    operator=(other);
}

Contact& Contact::operator=(const Contact& other) {
    if (this != &other) {
        Name::operator=(*this);
        delete[] m_address;
        m_address = nullptr;
        if (other.m_address) {
            m_address = new char[seneca::strlen(other.m_address)+1];
            seneca::strcpy(m_address, other.m_address);
        }
    }
    return *this;
}

Contact::~Contact() {
    delete[] m_address;
}
