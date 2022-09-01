#include <iostream>
#include "Bucket.h"
using namespace std;
/*struct*/ Bucket B;
void displayBucket() {
   cout << "Bucket capacity: " << B.m_capacity << endl;
   cout << "Bucket content: " << B.m_content << endl;
}

void setBucket(int capacity, int content) {
   B.m_capacity = capacity;
   B.m_content = content;
}

void fillBucket(int content) {
   if (B.m_content + content < B.m_capacity) {
      B.m_content += content;
   }
}

int emptyBucket(int content) {
   if (B.m_content > content) {
      B.m_content -= content;
   }
   else {
      content = B.m_content;
      B.m_content = 0;
   }
   return content;
}