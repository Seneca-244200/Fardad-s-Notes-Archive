#include <iostream>
#include <fstream> 
#include "Name.h"
using namespace std;

void SayHello(Name& ThePerson) {
   cout << "Hello " << ThePerson << endl;
}

int main() {
   ifstream fileIn("names.txt");
   ofstream fileOut("Whatever.txt");
   Name N , M;
   Name& myname = N;
   fileIn >> N ;
   SayHello(N);
   M = N;
   SayHello(M);
   cout << "--------------" << endl;
   N = myname;
   SayHello(N);
   cout << "--------------" << endl;
   fileOut << "Something to write" << endl << "*";
   if (fileOut) {
      fileOut.width(20);
      fileOut << "abe" << "*" << endl;
   }
   if (!fileOut) {
      cout << "Couldn't open the file" << endl;
   }
   return 0;
}