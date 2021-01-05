#pragma once

/*
type must have a default constructor
type must be safely assign-able to another type
*/
 
template <typename type>
class Array { // exception No 1 , the name of the class after the template
   type* m_data;
   int m_size;
public:
   Array(int size = 0);  // exception No 2, The name of the constructor
   Array(const Array<type>& CP) = delete;// exception No 2, The name of the constructor
   Array<type>& operator=(const Array<type>& RO) = delete;
   int size()const;
   void resize(int newsize);
   type& operator[](int index);
   ~Array(); // exception No 3, the name the destructor
};


template <typename type>
Array<type>::Array(int size) :m_size(size) { // exception No 2, The name of the constructor
   if (m_size <= 0) m_size = 1;
   m_data = new type[m_size];
}

template <typename type>
int Array<type>::size()const {
   return m_size;
}

template <typename type>
void Array<type>::resize(int newsize) {
   int i;
   if (newsize <= 0) newsize = 1;
   type* temp = new type[newsize];
   for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
}

template <typename type>
type& Array<type>::operator[](int index) {
   if (index >= m_size) resize(index + 1);
   return m_data[index];
}

template <typename type>
Array<type>::~Array() { // exception No 3, the name the destructor
   delete[] m_data;
}
