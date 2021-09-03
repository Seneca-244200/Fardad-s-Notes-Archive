#include <iostream>
#include "Scope.h"
using namespace std;
namespace sdds {

   bool scopeFlag = true;

   int rangeLimit = 20;


   void Scope::print(){
      cout << title << endl;
      cout << "Range: " << range << endl;
      for (int i = 0; i < range && i < rangeLimit; i++) {
         cout << '-';
      }
      cout << endl;
   }
   void Scope::read(){
      cout << "Title: ";
      cin >> title;
      cout << "Range out of " << rangeLimit << ": ";
      cin >> range;
   }
}