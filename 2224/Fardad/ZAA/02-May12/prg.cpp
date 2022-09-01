#include <iostream>
#include "Bucket.h"
#include "Bucket.h"
using namespace std;
int main() {
   int v = 0;
   setBucket(100, 50);
   displayBucket();
   cout << "fill 20" << endl;
   fillBucket(20);
   displayBucket();
   cout << "empty 60" << endl;
   v = emptyBucket(60);
   cout << "Emptied " << v << " out of bucket" << endl;
   displayBucket();
   cout << "empty 60" << endl;
   v = emptyBucket(60);
   cout << "Emptied " << v << " out of bucket" << endl;
   displayBucket();
   return 0;
}