#pragma once

// template <class T> perfectly ok
// type must supprot def const.
template <typename T>
class DynArray {
   T* m_data;
   unsigned int m_size;
public:
   DynArray(unsigned int size = 1u);
   T& operator[](unsigned int index);
   unsigned int size()const;
   ~DynArray();
};

template <typename T>
DynArray<T>::DynArray(unsigned int size) :m_size(size ? size : 1u) {
   m_data = new T[m_size];
}

template <typename type> // not good; for example only!!!
type& DynArray<type>::operator[](unsigned int index) {
   return m_data[index % m_size];
}

template <typename T>
DynArray<T>::~DynArray() {
   delete[] m_data;
}
template <typename T>
unsigned int DynArray<T>::size()const {
   return m_size;
}

