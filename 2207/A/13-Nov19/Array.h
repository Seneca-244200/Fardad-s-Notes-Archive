#include <iostream>

using namespace std;

template <typename T>
class Array {   //exception no 1, the name of the class right after template
   T* m_data;
   int m_size;
public:
   Array(int size = 0); // exception no 2 constructor names
   Array(const Array<T>& CP) = delete; // exception no 2 constructor names
   Array& operator=(const Array<T>& RO) = delete;
   int size()const;
   void resize(int newsize);
   T& operator[](int index);
   ~Array(); // exception no 3 destructor name
};

template <typename Type>
Array<Type>::Array(int size) :m_size(size) { // exception no 2 constructor names
   if (m_size == 0) m_size = 1;
   m_data = new Type[m_size];
}

template <typename Type>
int Array<Type>::size()const {
   return m_size;
}

template <typename Type>
void Array<Type>::resize(int newsize) {
   int i;
   if (newsize == 0) newsize = 1;
   Type* temp = new Type[newsize];
   for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_data[i];                      // Type should be assign-able to another type
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
}

template <typename Type>
Type& Array<Type>::operator[](int index) {
   if (index >= m_size) resize(index + 1);
   return m_data[index];
}

template <typename Type>
Array<Type>::~Array() { // exception no 3 destructor name
   delete[] m_data;
}
