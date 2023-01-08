#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name N;
   cout << "What is your name? ";
   cin >> N;
   cout << N << " said DOH!" << endl;
   return 0;
}