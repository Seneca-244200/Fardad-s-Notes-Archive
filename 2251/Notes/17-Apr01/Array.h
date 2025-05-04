// I think it was a bug in VS. 
// I closed and reopened the file and all the errors were gone!
#ifndef SENECA_ARRAY_H
#define SENECA_ARRAY_H
namespace seneca {
   // don't add the type to the class name right after template
   // don't add the type to consturctor names
   // don't add the type to the destructor name
   template <typename type>
   class Array {
      type* m_data{};
      size_t m_size{};
      type m_garbage{};
      Array<type>& resize( size_t newsize );
   public:
      // compiler, please creaet an empty one for me
      Array( size_t size = 1 );
      ~Array( );
      // modifier
      type& operator[]( size_t index );
      // query
      const type& operator[]( size_t index )const;
      size_t size( )const;
   };


   template <typename type>
   Array<type>& Array<type>::resize( size_t newsize ) {
      type* newMem = new type[newsize];
      for ( size_t i = 0; i < m_size && i < newsize; i++ ) {
         newMem[i] = m_data[i];
      }
      delete[] m_data;
      m_size = newsize;
      m_data = newMem;
      return *this;
   }

   template <typename type>
   Array<type>::Array( size_t size ) {
      if ( size ) m_data = new type[size];
      m_size = size;
   }
   template <typename type>
   size_t Array<type>::size( )const {
      return m_size;
   }

   template <typename type>
   Array<type>::~Array( ) {
      delete[] m_data;
   }

   template <typename type>
   type& Array<type>::operator[]( size_t index ) {
      if ( index >= m_size ) {
         resize( index + 1 );
      }
      return m_data[index];
   }
    
   template <typename type>
   const type& Array<type>::operator[]( size_t index )const {
      const type* ret = &m_garbage;
      if ( m_data != nullptr ) {
         ret = &m_data[index % m_size];
      }
      return *ret;
   }



}
#endif // SENECA_ARRAY_H
