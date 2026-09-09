#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
void resize(char*& cstr, size_t size) {
   char* temp = new char[size];
   for (size_t i = 0; i < size && i < strlen(cstr)+1; i++) {
      temp[i] = cstr[i];
   }
   delete[] cstr;
   cstr = temp;
}
int main() {
   char* name = new char[5] {};
   strcpy(name, "Fred");
   cout << name << endl;
   resize(name, 30); // resize(char*& cstr = name, size_t size = 30);
   strcat(name, " Soley");
   cout << name << endl;
   delete[] name;
   return 0;

}