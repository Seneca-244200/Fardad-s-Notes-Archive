#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char name[51];
   int intchar;
   char chChar;
   int num;
   cout << "Name: ";
   cin >> name;
   cout << "Your name is |" << name << "|" << endl;
   cin.ignore(numeric_limits<streamsize>::max(), ',');
   cin.ignore(4000, '\t');
   intchar = cin.get();
   chChar = cin.get();
   cin.get(chChar).fail();
   cin.get(name, 51);  // delimiter is newline and it is not extracted
   cin.getline(name, 51); // delimiter is newline and it is extracted
   cin.get(name, 51, '@'); // delimiter is '@' and it is not extracted 
   cin.getline(name, 51, '@'); // delimiter is '@' and it is extracted


   char str[9];
   int val;
   cout.setf(ios::failbit);
   cin.get(str, 9, ',');
   cin.ignore(3000, ',');
   cin >> val;
   //  "fardad Soleimanloo,34"
   cin.getline(str, 9, ',');
   cin >> val;
   if (cin) {

   }
   if (cin.good()) {

   }
   if (!cin) {

   }
   if (cin.fail()) {

   }
   fstream file("Myfile.txt", ios::out | ios::ate);
   return 0;
}