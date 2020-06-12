#pragma once
#include <iostream>
template <typename type>
class DynArray {
   type* m_data;
   unsigned int m_size;
   const int& get(unsigned int index)const {
      return m_data[index % m_size];
   }
public:
   DynArray(unsigned int size = 1u);
   type& operator[](unsigned int index);
//   const type& operator[](unsigned int index)const;
   unsigned size()const;
   std::ostream& display(std::ostream& os = std::cout)const;
   ~DynArray();
};

template <typename T>
std::ostream& DynArray<T>::display(std::ostream& os)const {
   for (int i = 0; i < size();i++) {
      //os << operator[](i) << " ";
      //os << (*this)[i] << " ";
      os << get(i) << " ";
   }
   return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const DynArray<T>& DA) {
   return DA.display(os);
}


template <typename type>
DynArray<type>::DynArray(unsigned int size) :m_size(size) {
   m_data = new type[size];
}


template <typename type>
type& DynArray<type>::operator[](unsigned int index) {
   return m_data[index % m_size];
}
//template <typename type>
//const type& DynArray<type>::operator[](unsigned int index) const{
//   return m_data[index % m_size];
//}

template <typename type>
DynArray<type>::~DynArray() {
   delete[] m_data;
}
template <typename type>
unsigned int DynArray<type>::size()const {
   return m_size;
}