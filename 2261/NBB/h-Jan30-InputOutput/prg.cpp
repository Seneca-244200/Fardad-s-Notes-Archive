#include <iostream>
using namespace std;
double getDouble(const char* prompt) {
   double val{};
   bool done = false;
   cout << prompt;
   do {
      cin >> val;
      if (cin.fail()) {
         cin.clear();
         cerr << "Invalid value, try again\n> ";
      }
      else {
         done = true;
      }
      cin.ignore(100000, '\n');
   } while (!done);
   return val;
}

void cinTest(const char* prompt) {
   double dval{ 123.456 };
   char str[81] = "Initial value";
   cout << prompt;
   cin >> dval >> str;
   if (!cin.fail()) {
      cout << "dval: " << dval << endl;
      cout << "str: " << str << endl;
   }
   else{
      cin.clear(); // if some went wrong, I am sorry pleae continue
      cerr << "Bad input detected" << endl;
   }
   cin.ignore(10000, '\n'); // flush
}
int main() {
   cout << getDouble("Enter a double\n> ") << endl;
   cinTest("Enter \n> 123 Hello there\n> ");
   cinTest("Enter \n>         123       Hello there\n> ");
   cinTest("Enter \n> Hello 123\n> ");
   return 0;
}