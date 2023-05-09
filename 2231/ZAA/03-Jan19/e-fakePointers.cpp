#include <iostream>
#include "pointers.h" 
using namespace std;
int main() {
   int a = 30;
   int pointer p;
   p = addressOf a;
   cout << targetOf p << endl;
   cout << p << endl;
   targetOf p = 400;
   cout << a << endl;
   return 0;
}
