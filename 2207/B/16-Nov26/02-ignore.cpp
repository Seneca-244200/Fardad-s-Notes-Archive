#include <iostream>
using namespace std;
int main() {
   char str[51];
   cin.ignore();
   cin.ignore(5, 'n');
   cin >> str; 
   cout << "|" << str << "|" << endl;
   return 0;
}