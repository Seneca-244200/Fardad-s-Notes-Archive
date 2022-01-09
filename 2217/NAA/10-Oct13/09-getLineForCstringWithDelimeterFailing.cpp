#include <iostream>
using namespace std;
int main() {
   char str[128] = "original value";
   char ch = 'x';
   cin.getline(str, 8); // 8 is the size of the array needed not the string; 
                    // delimeter by default is \n and will be extracted
   if (cin)
      cout << str << endl;
   else {
      cout << "cin failed: " << str << endl;
   }
   cout << "ch: ";
   ch = cin.get();
   cout << "*" << int(ch) << "*" << endl;
   cout << "*" << ch << "*" << endl;
   return 0;
}

