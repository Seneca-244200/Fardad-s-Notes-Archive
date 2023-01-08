#include <iostream>
using namespace std;

int main() {
   int a[5] = { 10,20,30,40,50 };
   cout << a[0] << endl;
   cout << *a << endl;
   cout << a[3] << endl;
   cout << *(a + 3) << endl;
   return 0; 
}