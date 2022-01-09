#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream file("data.txt");
   int ph;
   char name[100];
   while (file) {
      file >> ph;
      file.ignore();
      file.getline(name, 100);
      if(file)
         cout << name << ": " << ph << endl;
   }
   return 0;
}