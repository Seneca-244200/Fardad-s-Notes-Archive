#include <iostream>
#include <fstream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   ofstream file("report2.txt");
   file << "OOP244 NBB - Feb 09" << endl;
   int val{};
   cout << "Enter an integer:";
   cin >> val;
   file << "The number you entered is ";
   file.width(10);
   file.fill('^');
   file.setf(ios::right);
   file << val << endl;
   file.unsetf(ios::right);
   return 0;
}