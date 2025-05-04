#ifndef SENECA_INTARRAY_H
#define SENECA_INTARRAY_H
namespace seneca {
   class IntArray {
      int* m_data;
      size_t m_size;
   public:
      IntArray( );
      IntArray( size_t size );
      ~IntArray( );
      // modifiers 
      void setElem(size_t index,  int value );

      // queries
      int getElem( size_t index )const;
      size_t size( )const;

   };
}
#endif // !SENECA_INTARRAY_H

