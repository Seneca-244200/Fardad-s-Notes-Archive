#include <iostream>
using namespace std;
class Base {
   int m_a;
   double m_b{ 55.5 };
public:
   Base( int a, double b ) :m_a{ a } {
    
   }

};

class Derived : public Base {
   int m_a;
   double m_b;
public:
};

int main( ) {
   Base B( 10, 1.1 );
   return 0;
}