#include <iostream>
using namespace std;

int main() {
  /* int num;
   cout << "Please enter number of ints: ";
   cin >> num;*/
   int a[5] = { 10,20,30,40,50 };
   cout << *(a+2) << " " << a[2] << endl;
   return 0;
}