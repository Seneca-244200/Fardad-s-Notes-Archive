#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Name {
   char* first;
};

int main() {
   int non; // nubmer of names;
   int i; // loop counter
   char tempName[51];
   cout << "Please enter number of names: ";
   cin >> non;
   cin.ignore(1000, '\n');
   Name* names = new Name[non]; // DMA for names;
   cout << "Please enter the " << non << " names: " << endl;
   for (i = 0; i < non; i++) {
      cout << "Please enter the name number " << (i + 1) << ": ";
      cin.getline(tempName, 50, '\n');
      if (cin.fail()) {
         cout << "Too long, enter again: ";
         cin.clear();
         cin.ignore(1000, '\n');
         i--;
      }
      else {
         names[i].first = new char[strlen(tempName) + 1];
         strcpy(names[i].first, tempName);
      }
   }
   for (i = 0; i < non; i++) {
      cout << (i + 1) << ": " << names[i].first << endl;
   }
   for (i = 0; i < non; i++) {
      delete[] names[i].first;
   }
   delete[] names;
}