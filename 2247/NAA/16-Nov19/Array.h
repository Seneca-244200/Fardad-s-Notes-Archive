#pragma once

/*
- first change all the needed types to the place holder
- you add the type signature to all class names except:
   Name of constructors
   Name of destructor

*/

template <typename hoohoo>
class Array {
   hoohoo* m_data{};
   size_t m_size{};
   Array<hoohoo>& resize( size_t newsize );
public:
   Array( size_t size );
   Array( const Array& ) = delete;
   Array<hoohoo>& operator=( const Array<hoohoo>& ) = delete;
   virtual ~Array( );
   size_t size( )const;
   hoohoo& operator[]( size_t index );
   const hoohoo& operator[]( size_t index )const;
};

template <typename type>
Array<type>& Array<type>::resize( size_t newsize ) {
   type* temp = new type[newsize ? newsize : 1];
   size_t i = 0;
   for ( i = 0; i < m_size && i < newsize; i++ ) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
   return *this;
}

template <typename type>
Array<type>::Array( size_t size ) {
   if ( size == 0 ) size = 1;
   m_data = new type[m_size = size] { };
}

template <typename type>
Array<type>::~Array( ) {
   delete[] m_data;
}

template <typename type>
size_t Array<type>::size( ) const {
   return m_size;
}

template <typename type>
type& Array<type>::operator[]( size_t index ) {
   if ( index >= m_size ) resize( index + 1 );
   return m_data[index];
}

template <typename type>
const type& Array<type>::operator[]( size_t index ) const {
   return m_data[index % m_size];
}
