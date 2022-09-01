#include <iostream>
#include <string>
using namespace std;
#include "Utils.h"
namespace sdds {
    
    Utils ut; // a file scope that becomes universal by adding extern ut in the Util.h file
    bool debug = false;

   int Utils::getint(const char* prompt, istream& istr) const {
      int num;
      if (prompt) cout << prompt;
      istr >> num;
      istr.ignore(1000, '\n');
      return num;
   }
   // raplicating the cin.get() funciton
   istream& Utils::getint(int& num, const char* prompt, istream& istr)  const {
      num = getint(prompt, istr);
      return istr;
   }
    
}