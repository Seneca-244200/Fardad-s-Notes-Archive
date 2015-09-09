#include <iostream>
using namespace std;
#include "dynArr.h"
using namespace oop244;

int main(){
   DynArr Grades(5);
   int num;
   cout << "Enter number of grades: ";
   cin >> num;
   int i;
   for (i = 0; i < num; i++){
      cout << "Grade number " << (i + 1) << ": ";
      cin >> Grades[i];
   }
   double av = 0;
   for (i = 0; i < num; i++){
      av += Grades[i];
   }
   av = av / num;
   cout << "The average is " << av << endl;
   return 0;
};