#include <iostream>
#include "utils.h"
using namespace std;
namespace sdds {
   int read(int& number,
               const char* prompt ,
               const char* errMes) {
      if (prompt) cout << prompt;
      cin >> number;
      while (cin.fail()) {
         cout <<(errMes ? errMes: "Bad integer, try again: ");
         cin.clear();
         cin.ignore(10000, '\n');
         cin >> number;
      }
      cin.ignore(10000, '\n');
      return number;
   }

   int read(int& number, int min, int max,
      const char* prompt,
      const char* errMes) {

     // reuse your code here!
      return number;
   }

   double read(double& number,
      const char* prompt,
      const char* errMes) {
      if (prompt) cout << prompt;
      cin >> number;
      while (cin.fail()) {
         cout << (errMes ? errMes : "Bad integer, try again: ");
         cin.clear();
         cin.ignore(10000, '\n');
         cin >> number;
      }
      cin.ignore(10000, '\n');
      return number;
   }

}