#include <iostream>
#include <fstream>
using namespace std;

int main() {
   int ph;
   char name[100];
   ifstream file("data.txt");
   while (file) {
      file >> ph;
      file.ignore();
      file.getline(name, 100);
      if(file)  cout << name << ": " << ph << endl;
   }
   return 0;
}