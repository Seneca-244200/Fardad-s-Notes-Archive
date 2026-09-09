#include <iostream>
#include "Bucket.h"
using namespace std;
using namespace seneca;

void BucketAttributes(const Bucket& B) {
   cout << "value: " << B[0] << endl;
   cout << "capacity: " << B[1] << endl;
}

int main() {
   cout << "OOP244 NRA - Jun 05" << endl;
   Bucket B;
   cout << "Enter bucket information:\n";
   cin >> B;
   cout << "You enterd: " << B << endl;
   return 0;
}