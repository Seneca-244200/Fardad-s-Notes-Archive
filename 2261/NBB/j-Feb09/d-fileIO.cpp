#include <iostream>
#include <fstream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   ofstream file("report.txt");
   file << "OOP244 NBB - Feb 09" << endl;
   int val{};
   cout << "Enter an integer:";
   cin >> val;
   file << "The number you entered is " << val << endl;
   return 0;
}