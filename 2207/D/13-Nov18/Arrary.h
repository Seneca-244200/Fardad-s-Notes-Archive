#pragma once

// T must have default constructor and operator = 

template <typename T> // only effect the next scope
class Array {  // 1st excption, class name right after template
   T* m_data;
   int m_size;
public:
   Array(int size = 0);   // 2nd exception: name of constructors
   Array(const Array<T>& CP) = delete;
   Array<T>& operator=(const Array<T>& RO) = delete;
   int size()const;
   void resize(int newsize);
   T& operator[](int index);
   ~Array();   // 3rd exception: name destructor
};

template <typename T>
Array<T>::Array(int size) :m_size(size) {
   if (m_size <= 0) m_size = 1;
   m_data = new T[m_size];
}

template <typename T>
int Array<T>::size()const {
   return m_size;
}

template <typename T>
void Array<T>::resize(int newsize) {
   int i;
   if (newsize <= 0) newsize = 1;
   T* temp = new T[newsize];
   for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
}

template <typename T>
T& Array<T>::operator[](int index) {
   if (index >= m_size) resize(index + (index / 3 + 1));
   return m_data[index];
}

template <typename T>
Array<T>::~Array() {
   delete[] m_data;
}

