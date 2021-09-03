#include <iostream>
#include <fstream>
using namespace std;


int main() {
   ifstream filein("data.csv");
   char name[81];
   char job[41];
   int ESno;
   //while (!filein.fail()) {
   while (filein) {
      filein.getline(name, 81, ',');
      filein.getline(job, 41, ',');
      filein >> ESno;
      filein.ignore(1000, '\n');
      if(filein)
         cout << name << " (" << job << ") no: " << ESno << endl;
   }
   return 0;
}