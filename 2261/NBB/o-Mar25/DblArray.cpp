#include "DblArray.h"
#include <iostream>
DblArray& DblArray::resize(size_t newsize) {
    double* temp = new double[newsize = newsize ? newsize : 1] {};
    size_t i = 0;
    for (i = 0; i < m_size && i < newsize; i++) {
        temp[i] = m_data[i];
    }
    delete[] m_data;
    m_size = newsize;
    m_data = temp;
    return *this;
}

DblArray::DblArray(size_t size) {
    if (size == 0) size = 1;
    m_data = new double[m_size = size] {};
}

DblArray::~DblArray() {
    delete[] m_data;
}

size_t DblArray::size() const {
    return m_size;
}

size_t DblArray::noOfprn() const {
    return csvPrn;
}

double& DblArray::operator[](size_t index) {
    if (index >= m_size) resize(index + 1);
    return m_data[index];
}

const double& DblArray::operator[](size_t index) const {
    return m_data[index % m_size];
}

std::ostream& DblArray::printCsv(std::ostream& ostr) const {
    size_t* csvPrnPtr = const_cast<size_t*>(&csvPrn);
    (*csvPrnPtr)++;
    for (size_t i = 0; i < size(); i++) {
        std::cout << operator[](i);
        if (i != size() - 1) std::cout << ", ";
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, const DblArray& other) {
  
    return other.printCsv(ostr);
}
