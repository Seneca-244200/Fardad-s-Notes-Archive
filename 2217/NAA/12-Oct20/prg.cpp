#include <iostream>
#include "ClsLog.h"
using namespace std;
using namespace sdds;

ClsLog foo(ClsLog cls) {
   cout << "in foo: " << cls << endl;
   return cls;
}

ClsLog foobyRef(ClsLog& cls) {
   cout << "in foobyRef: " << cls << endl;
   return cls;
}

void print(ClsLog toPrn) {
   cout << "printing: " << toPrn << endl;
}

int main() {
   clog.setstate(ios::failbit);
   ClsLog C("InMain");
   cout << foo(C) << endl;
   print(foobyRef(C)); // nameless objects are never copied
   return 0;
}