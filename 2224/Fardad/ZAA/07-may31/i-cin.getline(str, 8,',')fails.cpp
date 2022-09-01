#include <iostream>
using namespace std;
int main() {
   char str[81]{}; //defauling to all elemnts zero and therefore empty string;
   cout << "Enter a long string (may include spaces but stops at ','): ";
   cin.getline(str, 8, ','); // delimiter must be reached before the lenght limit is hit
   if (cin) {
      cout << "istream ok..." << endl;
   }
   else {
      cout << "istream failed!" << endl;
   }
   cout << str << endl;
   cin >> str;
   cout << str << endl;
   return 0;
}