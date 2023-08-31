#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin.getline(str, 25);
   cout << str << endl;
   if(!fin) {
      cout << "25 chars read!" << endl;
      fin.clear();
   }
   fin.getline(str, 25);
   cout << str << endl;
   if(!fin) {
      cout << "25 chars read!" << endl;
      fin.clear();
   }
   fin.getline(str, 25);
   cout << str << endl;
   if(!fin) {
      cout << "25 chars read!" << endl;
      fin.clear();
   }
   fin.getline(str, 25);
   cout << str << endl;
   fin.getline(str, 25);
   if(!fin) {
      cout << "25 chars read!" << endl;
      fin.clear();
   }
   cout << str << endl;
   fin.getline(str, 25);
   cout << str << endl;
   if(!fin) {
      cout << "25 chars read!" << endl;
      fin.clear();
   }
   return 0;
}