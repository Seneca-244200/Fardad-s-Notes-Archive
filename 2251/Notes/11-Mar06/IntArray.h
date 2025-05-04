#ifndef SENECA_INTARRAY_H
#define SENECA_INTARRAY_H
namespace seneca {
   class IntArray {
      int* m_data{};
      size_t m_size{};
      int m_garbage{};
      IntArray& resize(size_t newsize);
   public:
      // compiler, please creaet an empty one for me
      IntArray( ) = default; 
      IntArray( size_t size = 0);
      ~IntArray( );
      // modifier
      int& operator[]( size_t index );
      // query
      const int& operator[]( size_t index )const;
      size_t size( )const;
   };
}
#endif // !SENECA_INTARRAY_H

