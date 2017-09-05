#include <iostream>
using namespace std;
int main() {
   int i = 10; // init

   int j;  // garbage
   j = 20;  // setting

   int& R = i;
   R = j;


   return 0;
}