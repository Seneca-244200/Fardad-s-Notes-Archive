#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter num 123: ";
   cin.ignore();// ignore one character
   cin >> num;
   cout << "num: " << num << endl;
   return 0;
}