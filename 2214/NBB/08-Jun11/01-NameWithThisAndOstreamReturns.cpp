#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   //int* p;
   //int i;
   //p = &i;
   //*p = 22; // a reference to i
   //int i = 0;
   //int J(0);
   Name A;
//   Name B = "Black";
   Name B("Black");
   Name C("John", "Doe");
   //A.set("Fred", "Soley").print();
   //B.set("Homer", "Simpson").print();

   A.set("Fred", "Soley");
   B.set("Homer", "Simpson");
   A.print() << " is a good person!" << endl;
   B.print() << " is my favourite Simpsons character!" << endl;

   return 0;
}