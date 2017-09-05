#include <iostream>
using namespace std;
int& foo(int& a) {
   return a;
}



char *foo(const char str[]) {
   char* p = new char[200];
   strcpy(p, str);
   return p;
}
int* makeInt(int val) {
   int* p = new int;
   *p = val;
   return p;
}
int main() {
   int x;
   foo(x) = 10;
   char* myname;
   int* i;
   myname = foo("Fardad");
   i = makeInt(1234567);
   cout << myname << endl;
   cout << *i << endl;
   delete[] myname;
   delete i;
   return 0;
}