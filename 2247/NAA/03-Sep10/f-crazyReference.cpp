#include <iostream>
using namespace std;
int& addone( int& ref ) {
   ref++;
   return ref;
}

int main( ) {
   int val = 200;
   addone( val )++;  // void addone(int& ref = val){
   cout << val << endl;
   return 0;
}