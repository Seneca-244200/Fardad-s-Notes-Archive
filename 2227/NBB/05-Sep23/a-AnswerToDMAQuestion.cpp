#include <iostream>
using namespace std;
struct Subject {
   char m_subjectCode[10];
   char m_subjectName[256];
   int mark;
};
struct Student {
   char m_name[51];
   int m_noOfSemester;
   double m_gpa;
   Subject m_taken[40];
   int m_noOfSubTaken;
};
int main() {
   Student* s = new Student;
   Student* stds = new Student[400];







   delete s;     //OS delete an object pointed by s;
   delete[] stds;// os , delete an array pointed by stds;

   // Common mistake:
   delete stds; // OS delete an object pointed by stds, there fore 399 of them will not be deallocete;
                // only the first one will be deleted
   return 0;
}