#include <iostream>
#include "cstr.h"
#include "ID.h"
using namespace std;
namespace seneca {
   ID::ID( ) {
      set( );
   }
   ID::ID( const char* name, size_t id ) {
      set( );
      set( name, id );
   }
   ID::~ID( ) {
      deallocate( );
   }
   void ID::set( ) {
      m_name = nullptr;
      m_id = 0u;
   }

   ID& ID::set( const char* name , size_t id ) {
      alocpy( m_name, name );
      m_id = id;
      return *this;
   }

   ID& ID::set( size_t id ) {
      m_id = id;
      return *this;
   }

   ostream& ID::display(ostream& ostr ) const {
      if ( isEmpty( ) ) {
         ostr << "Not Set!";
      }
      else {
         ostr << m_name << " (" << m_id << ")";
      }
      return ostr;
    }

   //bool ID::isEmpty( ) const {
   //   bool res = false;
   //   if ( m_name == nullptr ) {
   //      res = true;
   //   }
   //   return res;
   //}
   bool ID::isEmpty( ) const {
      return  m_name == nullptr;
   }
   void ID::setEmpty( ) {
      deallocate( );
      set( );
   }
   void ID::deallocate( ) {
      freeMem( m_name );
   }
}