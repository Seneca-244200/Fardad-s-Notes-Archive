#include  <iostream>
using namespace std;

struct Test {
   char name[41];
   int mark;
   void print( ) {
      cout << "Test name: " << name << ", mark: (" << mark << ")" << endl;
   }
};


int main( ) {
   Test m[2] = { { "Midterm", 90 }, {"Final", 80} };
   m[0].print( );
   m[1].print( );
   return 0;
}