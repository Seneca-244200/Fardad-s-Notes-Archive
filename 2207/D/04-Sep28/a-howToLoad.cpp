#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char* m_name;
   int m_studentNumber;
   double m_gpa;
};

int main() {
   Student* starr;
   int i;
   int noOfRecs = getRecs();
   bool readok = true;
   for (i = 0;readok && i < noOfRecs ; i++) {
      readok = load(starr[i]);
   }
   if(readok) 
      // file is good
   else
      // file is bad

   return 0;
}