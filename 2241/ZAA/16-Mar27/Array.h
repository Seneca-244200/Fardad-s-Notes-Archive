#pragma once
/*
* 1- all the types of the template reletive to the tempate logic must change to "type" placeholder
* 2- add the signature of the template (<type>) to all class name with following exceptions:
*    I - the class name right after the tempalate 
*    II - constructor name
*    II - destructor name
*/



template<typename type>
class Array {
   type* m_data{};
   size_t m_size{ };
   Array<type>& resize( size_t newsize );
public:
   Array( size_t size );
   Array( const Array<type>& ) = delete;
   Array<type>& operator=( const Array<type>& ) = delete;
   virtual ~Array( );
   size_t size( )const;
   type& operator[]( size_t index );
   const type& operator[]( size_t index )const;
};

template<typename type>
Array<type>& Array<type>::resize( size_t newsize ) {
   type* temp = new type[newsize ? newsize : 1] { };
   size_t i;
   for ( i = 0; i < m_size && i < newsize; i++ ) {
      temp[i] = m_data[i];
   }
   delete[] m_data;
   m_data = temp;
   m_size = newsize;
   return *this;
}



template<typename type>
Array<type>::Array( size_t size ) {
   if ( size == 0 ) size = 1;
   m_data = new type[m_size = size] { };
}

template<typename type>
Array<type>::~Array( ) {
   delete[] m_data;
}

template<typename type>
size_t Array<type>::size( ) const {
   return m_size;
}

template<typename type>
type& Array<type>::operator[]( size_t index ) {
   if ( index >= m_size ) resize( index + 1 );
   return m_data[index];
}

template<typename type>
const type& Array<type>::operator[]( size_t index ) const {
   return m_data[index % m_size];
}
