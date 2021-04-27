#include <iostream>
#include <fstream>
#include "Name.h"
using namespace std;

void SayHello(Name& ThePerson) {
   cout << "Hello " << ThePerson << endl;
}

int main() {
   Name N , M;
   Name& myname = N;
   cout << "What is your name: ";
   cin >> N ;
   SayHello(N);
   M = N;
   SayHello(M);
   cout << "--------------" << endl;
   N = myname;
   SayHello(N);
   cout << "--------------" << endl;
   return 0;
}