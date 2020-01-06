#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void displayInBraces(String sb) {
   cout << "[";
   sb.display() << "]" << endl;
}
int main() {
   String S, R = "Heehaw the hoohoo!";
   S.display() << endl;
   R.display() << endl;
   R.set("Something something and somthing!");
   R.display() << endl;
   displayInBraces(R);
   return 0;
}