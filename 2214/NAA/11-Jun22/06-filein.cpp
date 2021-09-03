#include <iostream>
#include <fstream>
using namespace std;
//using namespace sdds;
int main() {
   char name[200];
   char job[200];
   int empno;
   ifstream filein("data.csv");
  // while (!filein.fail()) {
   while (filein) {
      filein.getline(name, 200, ',');
      filein.getline(job, 200, ',');
      filein >> empno;
      filein.ignore(1000, '\n');
      if(!filein.fail())
         cout << name << " " << job << " " << empno << endl;
   }
   return 0;
}