#pragma once
#include <iostream>
/*
1- change all the reletive types to T
2- Add the typename to the all class name
   exp: name of the class right after template
        name of constructors
        name of the destructor
*/
template<typename T>
class Array {
   T* m_data{};
   size_t m_size{};
public:
   Array() = default;
   Array(size_t size) :m_data(new T[size]), m_size(size) {}
   Array(const Array<T>&) = delete;
   Array<T>& operator=(const Array<T>&) = delete;
   size_t size()const {
      return m_size;
   }
   T& operator[](size_t index);
   const T& operator[](size_t index)const {
      return m_data[index % m_size];
   }
   virtual ~Array() {
      delete[] m_data;
   }
   std::ostream& prnArray(std::ostream& ostr)const {
      for (size_t i = 0; i < size(); i++) {
         if (i != 0) ostr << ", ";
         ostr << operator[](i);
      }
      return ostr;
   }
};
template<typename HeeHoo>
HeeHoo& Array<HeeHoo>::operator[](size_t index) {
   return m_data[index % m_size];
}

template<typename type>
std::ostream& operator<<(std::ostream& ostr, const Array<type>& A) {
   return A.prnArray(ostr);
}