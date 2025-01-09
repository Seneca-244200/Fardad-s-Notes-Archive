#pragma once
class DblArray {
   double* m_data{};
   size_t m_size{};
   DblArray& resize( size_t newsize );
public:
   DblArray( size_t size );
   DblArray( const DblArray& ) = delete;
   DblArray& operator=( const DblArray& ) = delete;
   virtual ~DblArray( );
   size_t size( )const;
   double& operator[]( size_t index );
   const double& operator[]( size_t index )const;
};

