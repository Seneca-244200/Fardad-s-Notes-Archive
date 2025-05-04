#ifndef SENECA_INTARRAY_H
#define SENECA_INTARRAY_H
namespace seneca {
   class IntArray {
      int* m_data;
      size_t m_size;
      int m_garbage;
   public:
      IntArray( );
      IntArray( size_t size );
      ~IntArray( );

      // modifier
      int& element( size_t index );
      // query
      const int& element( size_t index )const;
      size_t size( )const;

   };
}
#endif // !SENECA_INTARRAY_H

