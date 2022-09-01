#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

int main() {
   Name N;
   Name F = "Fardad Soleimanloo";
   F.display() << " wrote this program!" << endl;  
   F.set("Freddie");
   cout << "but we are going call him " << F.get() << endl;
   cout << "Name: ";
   N.read();
   cout << "Hello ";
   N.display() << ", how are you?" << endl;
   N.set("Jack");
   cout << "Now I am going to call you " << N.get() << endl;
   return 0;
}