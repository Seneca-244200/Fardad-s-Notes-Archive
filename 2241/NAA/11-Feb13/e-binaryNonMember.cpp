#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "MyStr.h"
using namespace std;
using namespace seneca;
void printStr( MyStr  S ) {
   cout << S << endl;
}
int main( ) {
   MyStr name;
   MyStr H;
   cout << "What is your name?\n> ";
   cin >> H;
   H = "Homer " + name;
   cout << H << endl;
   return 0;
}