#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
struct Student {  // the struct becomes a type
   double gpa;
   int stdId;
   char name[51];
};
struct Coordinates {
   int x;
   int y;
   char tag[41];
};

struct Subject {
   Student st[35];
   int subCode;
};

void prnSub(const Subject* s) {

}

Subject readSub() {
   Subject s;

   return s;
}

void readSub(Subject* s) {
   // read the s->
}

int main() {
   Subject sb[500];
   Coordinates C[1000];
   for (int i = 0; i < 500; i++) {
      prnSub(&sb[i]);
   }
   sb[200] = readSub();

   readSub(&sb[200]);  // all you pass is 4 bytes

   return 0;
}
