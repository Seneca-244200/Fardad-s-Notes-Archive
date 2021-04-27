#include <iostream>
using namespace std;
int main() {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* ptr;
   ptr = a;
   a[0] = 5; 
   cout << a[0] << endl;
   *a = 234;
   cout << a[0] << endl;

   cout <<"prt[1]: " << ptr[1]
      << " is the same at a[1]: " << a[1]<<endl;
   ptr+=2;
   cout << *ptr << endl;
   ptr = &a[4];
   cout << *ptr << endl;
   return 0;
}
