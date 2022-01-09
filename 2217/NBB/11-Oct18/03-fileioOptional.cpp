// not for oop244 
#include <iostream>
#include <fstream>
using namespace std;
int main() {
   int val;
   double dval;
   char str[50];
   fstream myfile("data.txt", ios::in | ios::out);
   myfile >> val;
   myfile.ignore();
   cout << val << endl;
   myfile.getline(str, 50, ',');
   cout << str << endl;
   myfile.getline(str, 50, ',');
   cout << str << endl;
   myfile >> dval;
   cout << dval << endl;
   myfile >> str;
   cout << str << endl;

   myfile.seekp(0);
   myfile.flush();
   myfile << 9;
   myfile.seekg(0);

   cout << "----------------------------------------" << endl;
   myfile >> val;
   myfile.ignore();
   cout << val << endl;
   myfile.getline(str, 50, ',');
   cout << str << endl;
   myfile.getline(str, 50, ',');
   cout << str << endl;
   myfile >> dval;
   cout << dval << endl;
   myfile >> str;
   cout << str << endl;

   return 0;
}