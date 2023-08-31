#include <iostream>
using namespace std;
class Mark {
   int m_value;
public:
   Mark( int value = 0 ) :m_value{ value } {
      clog << "construct out of " << value << endl;
   };
   //Mark& operator=( const Mark& M ) {
   //   clog << "operator=" << endl;
   //   return *this;
   //}
   Mark& operator=( const Mark& M ) = delete;
};
int main( ) {
   int i;
   i = 5;
   int j = 5;


   cout << "Week 8 " << endl;
   Mark M( 10 ), N;

   N = 80;

   return 0;
 }