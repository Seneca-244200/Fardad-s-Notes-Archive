#include <iostream>
#include <fstream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   char str[81];
   int val;
   ifstream file("report.txt");
   file.getline(str, 81, '-');// does extract '-'
   cout << str << endl;
   file >> str;
   cout << str << endl;
   file >> val;
   cout << val << endl;
   file.get(str, 81, '1'); // does not extract 1
   cout << str << endl;
   file >> val;
   cout << val << endl;
   return 0;
}