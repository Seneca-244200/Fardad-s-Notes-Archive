#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;
using namespace seneca;
class Cloneable {
public:
   virtual Cloneable* clone( )const = 0;
   virtual char type( )const = 0;
   virtual ~Cloneable( ) = default;
};
class Int :public Cloneable {
   int m_data;
public:
   Int( int data ) :m_data( data ) { }
   int ivalue( )const {
      return m_data;
   }
   char type( )const {
      return 'i';
   }
   Cloneable* clone( )const {
      return new Int( *this );
   }
};
class Float :public Cloneable {
   float m_data;
public:
   Float( float data ) :m_data( data ) { }
   float fvalue( )const {
      return m_data;
   }
   Cloneable* clone( )const {
      return new Float( *this );
   }
   char type( )const {
      return 'f';
   }
};
class Whatever :public Cloneable {
public:
   Cloneable* clone( )const {
      return new Whatever( *this );
   }
   char type( )const {
      return 'w';
   }
};

int main( ) {
   Int A = 10, B = 30;
   Float C = 20.2f, D = 40.4f;
   Whatever w;
   Cloneable* c[5] = { &A, &C, &B, &D, &w };
   Cloneable* p{};
   for ( size_t i = 0; i < 5; i++ ) {
      p = c[i]->clone( );
      // printf the value or the clone
      switch ( p->type( ) ) {
      case 'i':
         cout << "Int value is: " <<  dynamic_cast<Int*>(p)->ivalue( ) << endl;
         break;
      case 'f':
         cout << "Float value is: " << dynamic_cast<Float*>(p)->fvalue( ) << endl;
         break;
      default:
         cout << "Unknown cloneable object!" << endl;
         break;
      }

      delete p;
   }

   return 0;
}