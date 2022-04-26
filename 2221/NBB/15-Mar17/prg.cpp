#include <iostream>
#include "FullName.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
void showFirstLast(FullName n) {
   cout << "Firstname: " << n.first() << endl;
   cout << "Lastname: " << n.last() << endl;
}
int main() {
   sdds_debug = false;
   FullName name;
   FullName another{ "Fred", "Soley" };
   cout << "What is yor name?" << endl;;
   cin >> name;
   cout << "Hello " << name.first() << endl;
   cout << "Your full name is: " << name << endl;
   cout << "----------------------" << endl;
   cout << another << endl;
   another = name;
   cout << another << endl;
   showFirstLast(another);
   return 0;
}