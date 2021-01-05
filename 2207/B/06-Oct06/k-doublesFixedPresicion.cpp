#include <iostream>
using namespace std;
int getInt();
int getInt(int min, int max);
int getInt(int min, int max, const char* prompt);
int main() {
   int a = 10;
   double b = 123.3456891;
   char message[123] = "hello";
   cout.setf(ios::fixed);
   cout.precision(2);
   cout.width(10);
   cout << a << "|";
   cout.width(20);
   cout << b << "|";
   cout.width(15);
   cout.setf(ios::left);
   cout << message << "|" << endl;
   cout << "-------------------------------------------------------" << endl;
   cout.unsetf(ios::left);
   cout.fill('*');
   b = 234;
   cout.width(10);
   cout << a << "|";
   cout.width(20);
   cout << b << "|";
   cout.width(15);
   cout.setf(ios::left);
   cout << message << "|" << endl;
   cout << "-------------------------------------------------------" << endl;

   return 0;
}

