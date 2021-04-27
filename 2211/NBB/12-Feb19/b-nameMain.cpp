#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Name.h"
void SayHello(Name& hello) {
   cout << "Hello " << hello << endl;
}
int main() {
   Name N, M;
   Name& myname = N;
   cout << "What is your name: ";
   cin >> N;
   SayHello(N);
   M = N;
   SayHello(M);
   myname = N;
   SayHello(myname);
   return 0;
}