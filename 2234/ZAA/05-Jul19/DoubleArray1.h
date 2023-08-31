#ifndef SDDS_DOUBLEARRAY_H
#define SDDS_DOUBLEARRAY_H
namespace sdds {
   class DoubleArray {
      double* m_elements{};
      size_t m_size;
   public:
      DoubleArray( size_t size );
      void setElement( size_t index, double value );
      double getElement( size_t index )const;
      size_t size( )const;
      virtual ~DoubleArray( );
   };
}
#endif // !SDDS_DOUBLEARRAY_H


