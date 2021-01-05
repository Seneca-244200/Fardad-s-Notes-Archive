#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
   char name[128];
   int code;
   cout << "What is your name and your subject code? (comma seperated) ";
   //cin >> name >> code;
 
   cin.getline(name, 127,',');
   cin >> code;

   // Fred Soley,244
   /* the cool way:
   cin.getline(name, 127, ',') >> code;
   */
   cout << "Hello " << name <<  ", welcome to oop" << code << " class!" << endl;
   return 0;
}