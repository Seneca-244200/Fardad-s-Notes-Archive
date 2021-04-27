#include <iostream>
#include "NameNoResource.h"
using namespace std;
int main() {
   NameNoResource N , M;
   cout << "What is your name: ";
   cin >> N ;
   cout << "Hello " << N << endl;
   M = N;
   cout << "Hello agian " << M << endl;
   return 0;
}