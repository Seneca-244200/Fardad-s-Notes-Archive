#include <iostream>
#include "Subject.h"
using namespace std;
namespace seneca {
   void print( const Subject* sptr ) {
      cout << sptr->m_code << ": semester " << sptr->m_sem << endl;
   }

   void set( Subject* sptr, int code, int sem ) {
      sptr->m_code = code;
      sptr->m_sem = sem;
   }

   void Subject::print( )const {
      cout << m_code << ": semester " << m_sem << endl;
   }

   void Subject::set( int code, int sem ) {
      m_code = code;
      m_sem = sem;
   }

}