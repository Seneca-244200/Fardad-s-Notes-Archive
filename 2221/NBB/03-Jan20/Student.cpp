#include <iostream>
#include "Student.h"
using namespace std;
namespace sdds {
   const double IntrestRate = 0.02; // file scope (because no extern in header)
   double MinMonPayment = 20.50; // is global(because there is extern in header)
   void Student::display() {
      cout << name << " ," << stNo <<
         ", osap loan: " << balance << " interst: " <<
         balance*IntrestRate <<  endl;
   }
}