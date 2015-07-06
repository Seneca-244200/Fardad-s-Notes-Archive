#include <iostream>
using namespace std;

void getInt(int& intRef){
   cin >> intRef;
}

int main(){
   int a, b;
   cout << "Please enter an int: ";
   getInt(a);
   cout << "You entered: " << a << endl;
   cout << "Please enter another int: ";
   getInt(b);
   cout << "You entered: " << b << endl;
   return 0;
}
