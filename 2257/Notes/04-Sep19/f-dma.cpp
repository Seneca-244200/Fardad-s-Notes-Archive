#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

/// <summary>
/// Dynamically gets name from console and returns it. 
/// </summary>
/// <returns>dynamic C-string</returns>
char* getName();
int main() {
   char* name{};
   name = getName();
   cout << "Hello " << name << ", how are you?" << endl;
   delete[] name;
   return 0;
}
char* getName() {
   char temp[100];
   cout << "Please enter you name\n> ";
   cin.getline(temp, 100);
   char* name = new char[strlen(temp) + 1];
   strcpy(name, temp);
   return name;
}