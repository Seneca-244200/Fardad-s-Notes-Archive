#include <iostream>
using namespace std;
int& display(int& R){
   cout << "R: " << R << endl;
   return R;
}
int main(){
   int i = 10;
   int j = 20;
   int& r=i;
   r = j;

   cout << "i: " << i << endl;
   cout << "j: " << j << endl;
   cout << "r: " << r << endl;
   display(i);
   display(j) = 1000;
   cout << "j: " << j << endl;
   return 0;
}