#include <iostream>
using namespace std;

void getInt(int* intPtr){
   cin >> *intPtr;
}

int main(){
   int a;
   cout << "Please enter an int: ";
   getInt(&a);
   cout << "You entered: " << a << endl;
   return 0;
}
