#include <iostream>
using namespace std;
int foo(const char*, int);
// protytpe for function faa;
void faa(int*, char*);
anytype faa(const int*,const  char*);
class Employee {
public:
   Employee(int);
   Employee(const Employee& A);

};


int main() {
   Employee E(12345);
   Employee X(E);

   int a; 
   char name[52] = "Fred";
   a = foo("hello", 123);
   faa(&a, name);
   return 0;
}



