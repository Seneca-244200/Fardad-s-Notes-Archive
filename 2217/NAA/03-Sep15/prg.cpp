#include <iostream>
using namespace std;

int& crazyRef(int& R);

/*
R new name for v
crazyRef() new name for R ===> crazyRev() new name for V

*/

int main(){
   int a = 20;
   int b = 30;
   int c = 40;
   int* ptrs[3] = { &b, &a , &c };
   for (int i = 0; i < 3; i++) {
      cout << *ptrs[i] << endl;
   }
   return 0;
} 

