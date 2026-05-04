#pragma once
#include <iostream>
class DblArray {
    double* m_data{};
    size_t m_size{};
    size_t csvPrn{};
protected:
    DblArray& resize(size_t newsize);
public:
    DblArray(size_t size);
    DblArray(const DblArray&) = delete;
    DblArray& operator=(const DblArray&) = delete;
    virtual ~DblArray();
    size_t size()const;
    size_t noOfprn()const;
    double& operator[](size_t index);
    const double& operator[](size_t index)const;
    std::ostream& printCsv(std::ostream& ostr)const;
};

std::ostream& operator<<(std::ostream& ostr, const DblArray& other);
