#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream file("data.txt");
   int phno;
   char name[500];
   while (file) {
      file >> phno;
      if (file) {
         file.ignore();
         file.getline(name, 500);
         cout << name << ": " << phno << endl;
      }
   }
   return 0;
}

