#include  <iostream>
using namespace std;
void print( int val ) {
   cout << val << endl;
}
void print(const char* s ) {
   cout << s << endl;
}
int main( ) {
   int i = 20;

   // diff i and 20?
   char name[] = { "Fred" };
   print ( 20 ); // print(int val = 20);
   print( name );  // print(const char* s = name);
   print( "Jack" ); // print(const char s[] = "Jack");
    return 0;
}