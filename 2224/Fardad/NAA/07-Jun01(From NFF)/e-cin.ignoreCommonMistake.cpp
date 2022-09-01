#include <iostream>
using namespace std;
int main() {
   int i{};
   cout << "Enter an int with cin.ingore('\\n')\n which is a common mistake: ";
   cin.ignore('\n');
   cin >> i;
   cout << i << endl;
   if (cin) {
      cout << "cin ok..." << endl;
   }
   else {
      cout << "cin filed!" << endl;
   }
   cout << "there is no cin.ingore(char) overload,\n"
      "so compiler will cast the char to an int (which is the ascii code)\n"
      "and ignore that many characters!\n"
      "Which in this case is the ascii code of '\\n' which is 10!" << endl;
   return 0;
}