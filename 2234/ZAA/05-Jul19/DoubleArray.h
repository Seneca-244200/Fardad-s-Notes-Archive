#ifndef SDDS_DOUBLEARRAY_H
#define SDDS_DOUBLEARRAY_H
namespace sdds {
   class DoubleArray {
      double* m_elements{};
      size_t m_size;
   public:
      DoubleArray( size_t size );
      DoubleArray( const DoubleArray& D ) = delete;
      DoubleArray& operator=( const DoubleArray& D ) = delete;
      double& operator[]( size_t index )const;
      double& operator[]( size_t index );
      size_t size( )const;
      operator const double* ()const;
      virtual ~DoubleArray( );
   };
}
#endif // !SDDS_DOUBLEARRAY_H


