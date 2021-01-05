#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void show(const char* prompt, const Container& C) {
   cout << prompt;
   C.display() << endl;
}
int main() {
   Container E(200, 25);
   int content;
   content = (int)E;
   cout << "The conent of E is " << content << endl;
//   if((bool)E){
   if (E) {
      cout << "E is not empty!" << endl;
   }
   return 0;
}