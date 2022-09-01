#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

int main() {
   //int i = 100;
   //int i(100); //same as above
   int i{ 100 };// save as above
   Name N{};
   //Name F = "Fardad Soleimanloo";
   //Name F("Fardad Soleimanloo"); //same as above
   Name F{ "Fardad Soleimanloo" }; // same as above
   //Name E("Sir", "Elton John");
   Name E{ "Sir", "Elton John" }; // same as above
   Name& Nref = N;
   F.display() << " wrote this program!" << endl;
   cout << "but we are going call him ";
   F.set("Freddie").display() << endl;
   cout << "Name: ";
   N.read();
   cout << "Hello ";
   N.display() << ", how are you?" << endl;
   cout << "Now I am going to call you ";
   N.set("Jack").display() << endl;
   N.set(Nref).display() << endl;
   N.set(F).display() << endl;
   E.display() << endl;
   cout << i << endl;
   return 0;
}