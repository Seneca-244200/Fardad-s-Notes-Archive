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
   Cloneable* c[5] = { new Int( 10 ), new Float( 20.2f ), new Int( 30 ), new Float( 40.4f ) , new Whatever() };
   for ( size_t i = 0; i < 5; i++ ) {
      switch ( c[i]->type() ) {
      case 'i':
         cout << "Int value is " << dynamic_cast<Int*>(c[i])->ivalue( ) << endl;
         break;
      case 'f':
         cout << "Float value is " << dynamic_cast<Float*>(c[i])->fvalue( ) << endl;
         break;
      default:
         cout << "Unknown cloable object!" << endl;
         break;
      }
      delete c[i];
   }

   return 0;
}