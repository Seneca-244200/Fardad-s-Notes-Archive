#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;
#include "Name.h"
void SayHello(Name& hello) {
   cout << "Hello " << hello << endl;
}
int main() {
   ifstream fileIn("names.txt");
   ofstream fileOut("data.txt");
   Name N, M;
   Name& myname = N;
   fileIn >> N;
   SayHello(N);
   fileOut << "Hello dear file" << endl << "*";
   fileOut.width(20);
   fileOut.setf(ios::fixed);
   fileOut.setf(ios::left);
   fileOut.precision(2);
   fileOut << 123.456789 << "*" << endl;

   fileIn >> M;
   if (fileIn) {
      SayHello(M);
   }
   else {
      cout << "could not read from the file!" << endl;
   }
   fileIn >> M;
   if (fileIn) {
      SayHello(M);
   }
   else {
      cout << "could not read from the file!" << endl;
   }

   fileIn >> M;
   if (fileIn) {
      SayHello(M);
   }
   else {
      cout << "could not read from the file!" << endl;
   }



   return 0;
}