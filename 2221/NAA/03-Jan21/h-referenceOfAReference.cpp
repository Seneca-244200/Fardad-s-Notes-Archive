#include <iostream>
using namespace std;

//void ref(int& R) {
//
//}


int main() {
   int A;
   int& b = A;
   int& c = b;

   A = 40;

   cout << c << endl;


   //int x = 10;

   //ref(x);    // ref(int& R = x);

   return 0;
}