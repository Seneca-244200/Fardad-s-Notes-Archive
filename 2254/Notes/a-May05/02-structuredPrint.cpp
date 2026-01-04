#include  <iostream>
using namespace std;

struct Test {
   char name[41];
   int mark;
};
void print( Test T ) {
   cout << "Test name: " << T.name << ", mark: (" << T.mark << ")" << endl;
}

int main( ) {
   Test m = { "Midterm", 90 };
   print( m );
   return 0;
}