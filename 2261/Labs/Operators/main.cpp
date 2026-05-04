#include <iostream>
#include "MyString.h"

using namespace seneca;
using namespace std;

int main() {

   MyString a("Hello");
   MyString b{ "World" };
   MyString d = "Whatever"; // same as above a constructor
   cout << "Initial strings:"<< '*' << endl;;
   a.display()<< '*' << endl;;
   b.display()<< '*' << endl;;
 

   d = "A new value!"; // this is operator= 
   d.display()<< '*' << endl;;


   a += b;
   a.display()<< '*' << endl;;

   ++a;
   a.display()<< '*' << endl;;

   a = "Hello";
   a++;
   a.display()<< '*' << endl;;

   MyString c = a + b;
   c.display()<< '*' << endl;;

   a[0] = 'Y';
   a.display()<< '*' << endl;;

  const MyString k("Const");
   cout << k[1]<< '*' << endl;;

   const char* p = a;
   cout << p<< '*' << endl;;

   MyString input;
   cout << "Enter a string: ";
   input.read();
   input.display()<< '*' << endl;;

   return 0;
}