#include "IntArray.h"
#include <iostream>
using namespace std;
namespace seneca {

   IntArray::IntArray( size_t size ) {
      if ( size == 0 ) size = 1; 
      m_data = new int[size] { };
      m_size = size;
   }
   IntArray::IntArray( const IntArray& other ) {
      // first set the current object to safe empty state
      // then do the coping if other is not in a safe empty state
      operator=( other );
     
   }
   IntArray& IntArray::operator=( const IntArray& other ) {
      if ( this != &other ) { // we are not the same!
         // wipe current data
         delete[] m_data;
         m_data = new int[other.m_size];
         for ( size_t i = 0; i < other.m_size; i++ ) {
            m_data[i] = other.m_data[i];
         }
         m_size = other.m_size;
      }
      return *this;
   }
   IntArray::~IntArray( ) {
      delete[] m_data;
   }
   int& IntArray::element( size_t index ) {
      return m_data[index % m_size];
   }
   int& IntArray::operator[]( size_t index ) {
      if ( index >= m_size ) {
         int* temp = new int[index + 1];
         for ( size_t i = 0; i < m_size; i++ ) {
            temp[i] = m_data[i];
         }
         m_size = index + 1;
         delete[] m_data;
         m_data = temp;
      }
      return m_data[index];
   }
   const int& IntArray::operator[]( size_t index )const {
      return m_data[index % m_size];
   }
   size_t IntArray::size( )const {
      return m_size;
   }
   ostream& operator<<( ostream& ostr, const IntArray& I ) {
      for ( size_t i = 0; i < I.size( ); i++ ) {
         if ( i ) ostr << ",";
         ostr << I[i];
      }
      return ostr;
   }
}