// out of the scope of oop244
// FYI
#include <iostream>
#include <fstream>
using namespace std;
int main() {
   fstream theData("data.txt",ios::in | ios::out); // works exactly like cin but fed from a file namely "data.txt"
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
   theData.seekp(0);
   theData << 98;
   theData.seekp(16);
   theData << "Sina";
   theData.seekg(0);
   cout << "---------------------------" << endl;
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