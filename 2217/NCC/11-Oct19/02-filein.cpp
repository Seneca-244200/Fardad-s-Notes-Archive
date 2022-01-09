#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream theData("data.txt"); // works exactly like cin but fed from a file namely "data.txt"
   int ival;
   double dval;
   char str[3][50];
   theData >> ival;
   theData.ignore();
   theData.getline(str[0], 50, ',');
   theData.getline(str[1], 50, ',');
   theData >> dval;
   theData >> str[2];
   cout << ival << endl << dval << endl << str[0]
      << endl << str[1] << endl << str[2] << endl;
   return 0;
}