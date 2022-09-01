#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
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

void emptyAllNamesAndCode(Subject* sptr) {
   sptr->subCode = 0;
   for (int i = 0; i < 35; i++) {
      sptr->st[i].name[0] = 0;
   }
}

int main() {
   Subject S;
   S.subCode = 244;
   strcpy(S.st[0].name, "Fred Soley");
   return 0;
}
