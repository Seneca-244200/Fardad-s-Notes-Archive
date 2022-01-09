#include <iostream>
using namespace std;
void foo(int& R) {
   cout << R << endl;
   R += 10;
}

void getInt(int& value) {
   cout << "Int: ";
   cin >> value;
}
int main() {
   int value = 50; // at line 3: void foo(int& R = value){
   foo(value);
   cout << value << endl;
   getInt(value);
   cout << value << endl;
   return 0;
}