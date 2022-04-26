#include <iostream>
#include "Transcript.h"
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   float fredsGpa;
   Mark gpaMark("Fred Soley", 76, 100);
   gpaMark.gpa(fredsGpa);  // Mark::gpa(float& gpa = fredsGpa)
   cout.setf(ios::fixed);
   cout.precision(1);
   cout << (const char*)gpaMark << ": " << fredsGpa << endl;
   gpaMark = 65;
   gpaMark.gpa(&fredsGpa);
   cout << (const char*)gpaMark << ": " << fredsGpa << endl;
   gpaMark = 85;
   fredsGpa = gpaMark.gpa();
   cout << (const char*)gpaMark << ": " << fredsGpa << endl;
   gpaMark = 55;
   fredsGpa = gpaMark;
   cout << (const char*)gpaMark << ": " << fredsGpa << endl;
   return 0;
}