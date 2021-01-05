#include "io.h"
using namespace sdds;
int main() {
   char name[51];
   int age;
   fout<<"Please enter your name and age: ";
   fin>>name>>age;
   fout << "Hi, ";
   fout.width(10);
   fout << name;
   if (age > 18) {
      fout<<" Welcome to Seneca Bar!\n";
   }
   else {
      fout << " you are ";
      fout.width(20);
      fout << age << " years old and can not get in\n";
   }
   return 0;
}