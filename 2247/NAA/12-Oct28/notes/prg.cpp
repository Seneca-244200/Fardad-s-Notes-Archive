#include <iostream>
using namespace std;

class Base {
   int m_data;
public:
   Base(int data = 10):m_data(data ){ }
   void doTheThing(){ 
      cout <<"Base: " << m_data << endl;
   }
   virtual ~Base( ) = default;// memorize and always add this to your classes
};

class Derived :public Base {
   int m_data;
   double m_db;
public:
   Derived( int data=100, double db = 123.45 ) :Base(data/2),m_data( data ), m_db(db) { }
   void doTheThing( ) {
      Base::doTheThing( );
      cout << "Derived: " << m_data << " and " << m_db << endl;
   }
};


int main() {
   Base B;
   Derived D;
   B.doTheThing( );
   cout << "=======================" << endl;
    D.doTheThing( );
   return 0;
}

void shadow( ) {
   int a = 10;

   if ( true ) {
      int a = 20;
      a = 100;
   }



}