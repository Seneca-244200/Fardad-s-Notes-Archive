#include <iostream>
using namespace std;
int main() {
   char* a;
   char str[50] = "abc";
   char name[31] = "jack";
   a = name;
   strcpy(str, a);
   return 0;
}