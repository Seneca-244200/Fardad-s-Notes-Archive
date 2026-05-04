#include <iostream>
using namespace std;
int& refernceOf(int& val) {
   return val;
}

int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   int i = 20;
   cout << i << endl;
   refernceOf(i) += 100;// refernceOf(int& val = i);
   cout << i << endl;
   cout << 20 + refernceOf(i) << endl;
   return 0;
}
