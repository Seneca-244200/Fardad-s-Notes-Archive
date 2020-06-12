#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void bar(int len =60, char fill = '-');

int main() {
   bar(20, '*');
   bar(30, '@');
   bar(40);
   bar();
   return 0;

}

void bar(int len, char fill) {
   cout << len << ": ";
   for (int i = 0; i < len; i++) cout << fill;
   cout << endl;
}