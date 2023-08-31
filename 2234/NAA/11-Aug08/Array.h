#pragma once
#ifndef SDDS_FLOATARRAY_H
#define SDDS_FLOATARRAY_H
// implement copy constructor and copy assignment
/*
1- chante the focused type of the array to T
2- add the typename as signature to all the class names 
   exception:
      1 - the name of the class right after template
      2 - constructor names
      3 - desturctor name
*/
namespace sdds {

template<typename T>
   class Array {
      T* m_data;
      size_t m_size;
   public:
      size_t size( )const;
      Array( size_t size );
      Array( const Array<T>& A );
      Array<T>& operator=( const Array<T>& A );
      const T& operator[]( size_t index )const;
      T& operator[]( size_t index );
      virtual ~Array( );
   };


   template<typename T>
   size_t Array<T>::size( ) const {
      return m_size;
   }
   template<typename T>
   Array<T>::Array( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new T[size];
      m_size = size;
   }
   template<typename T>
   Array<T>::Array( const Array<T>& A ) {
      operator=( A );
   }
   template<typename T>
   Array<T>& Array<T>::operator=( const Array<T>& A ) {
      if ( this != &A ) {
         delete[] m_data;
         m_data = new T[m_size = A.size( )];
         for ( size_t i = 0; i < m_size; i++ ) m_data[i] = A[i];
      }
      return *this;
   }
   template<typename T>
   const T& Array<T>::operator[]( size_t index )const {
      return m_data[index % m_size];
   }
   template<typename T>
   T& Array<T>::operator[]( size_t index ) {
      if ( index >= m_size ) {
         T* temp = new T[index + 1];
         size_t i = 0;
         for ( ; i < m_size; i++ ) {
            temp[i] = m_data[i];
         }
         for ( ; i < index + 1; i++ ) {
            temp[i] = 0.0f;
         }
         delete[] m_data;
         m_data = temp;
         m_size = index + 1;
      }
      return m_data[index];
   }
   template<typename T>
   Array<T>::~Array( ) {
      delete[] m_data;
   }
}
#endif // !SDDS_FLOATARRAY_H


