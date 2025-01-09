#include <iostream>
using namespace std;
void addone( int i ) {
   i++;
}
void addone( int* p ) {
   (*p)++;
}

int main( ) {
   int val = 200;
   addone( val );  // void addone(int i = val){
   cout << val << endl;
   addone( &val ); // void addone(int* p = &val){
   cout << val << endl;
   return 0;
}