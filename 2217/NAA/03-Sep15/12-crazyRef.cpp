#include <iostream>
using namespace std;

int& crazyRef(int& R);

/*
R new name for v
crazyRef() new name for R ===> crazyRev() new name for V

*/

int main(){
   int v = 30;
   
   crazyRef(v) = 234;

   cout << v << endl;
   crazyRef(v)++;
   cout << v << endl;
   crazyRef(v) += 10;
   cout << v << endl;
   return 0;
} 

int& crazyRef(int& R) {
   return R;
}
