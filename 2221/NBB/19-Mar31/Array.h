#pragma once
#ifndef SDDS_ARRAY_H
#define SDDS_ARRAY_H
/*
type requires default constructor
copy assignment should be supported in type
*/
namespace sdds {
   template <typename type>
   class Array {
      type* m_array{};
      unsigned int m_size{};
   public:
      // construction 
      Array(unsigned int size = 10);
      // sizing
      void resize(unsigned int newsize);
      unsigned int size()const;
      // index access
      type& operator[](unsigned int index);
      const type& operator[](unsigned int index)const;
      // ruel of three
      Array(const Array<type>& A);
      Array<type>& operator=(const Array<type>& A);
      virtual ~Array();
   };

   template <typename type>
   Array<type>::Array(unsigned int size ) {
      if (size == 0) size = 10;
      m_array = new type[size];
      m_size = size;
   }


   template <typename type>
   unsigned int Array<type>::size()const {
      return m_size;
   }

   template <typename type>
   type& Array<type>::operator[](unsigned int index) {
      if (index >= m_size) {
         resize(index + 1);
      }
      return m_array[index];
   }
   
   template <typename type>
   const type& Array<type>::operator[](unsigned int index)const {
      return m_array[index % m_size];
   }
  

   template <typename type>
   Array<type>& Array<type>::operator=(const Array<type>& A) {
      if (this != &A) {
         delete[] m_array;
         m_array = new type[m_size = A.m_size];
//         for (unsigned int i = 0; i < m_size; m_array[i] = A.operator[](i), i++);
         for (unsigned int i = 0; i < m_size; m_array[i] = A.m_array[i], i++);
         //         for (unsigned int i = 0; i < m_size; m_array[i] = A[i], i++);
         //for (unsigned int i = 0; i < m_size; (*this)[i] = A[i], i++);
      }
      return *this;
   }


   template <typename type>
   Array<type>::~Array() {
      delete[] m_array;
   }




   template <typename type>
   Array<type>::Array(const Array<type>& A) {
      operator=(A);
   }


   template <typename type>
   void Array<type>::resize(unsigned int newsize) {
      if (newsize == 0) newsize = 10;
      type* temp = new type[newsize];
      for (unsigned int i = 0; i < m_size && i < newsize; i++) {
         temp[i] = m_array[i];
      }
      delete[] m_array;
      m_size = newsize;
      m_array = temp;
   }


}


#endif // !SDDS_ARRAY_H
