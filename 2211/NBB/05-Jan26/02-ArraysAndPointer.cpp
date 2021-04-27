#include <iostream>
using namespace std;




int main() {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* ptr = a ; // I can do this because a is a pointer
   cout << "*a: " << *a << endl;
   cout << "*ptr: " << *ptr << endl;

   *a = 200;
   cout <<"a[0]: " <<  a[0] << endl;
   cout << "ptr[0]: " << ptr[0] << endl;
   ptr += 3;
   cout << *ptr << endl;
   cout << "ptr[0]: " << ptr[0] << endl;
   return 0;
}
