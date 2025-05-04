#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   char name[6];
   char surname[7];
   cout << "Enter Fred,Soley for success OR Fredrick,Whatever to fail the cin" << endl;
   cout << "Enter comma seperated name and surename:\n> ";
   cin.getline(name, 6, ',');
   cin.getline(surname, 7);// the default delimiter is '\n');

   cout << "Hello " << "[" << name << " " << surname << "]" << endl;

   return 0;
}