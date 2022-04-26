#include <iostream>
#include "Student.h"
using namespace std;
namespace sdds {
   const double IntrestRate = 0.02; // file scope changed to global by added extern statement
                                    // in student.h
   void Student::display() {
      cout << name << ", " << stNo 
         << ", osap Loan: " << balance 
         << "With the intrest rate of: " << balance* IntrestRate<< endl;
   }



}