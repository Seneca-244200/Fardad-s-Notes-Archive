#include <iostream>
using namespace std;
int main() {
   char str[81]{}; //defauling to all elemnts zero and therefore empty string;
   cout << "Enter a long string (may include spaces but stops at ','): ";
   cin.get(str, 8,',');
   if (cin) {
      cout << "istream ok..." << endl;
   }
   else {
      cout << "istream filed!" << endl;
   }
   cout << str << endl;
   cin >> str; 
   cout << str << endl;
   return 0;
}