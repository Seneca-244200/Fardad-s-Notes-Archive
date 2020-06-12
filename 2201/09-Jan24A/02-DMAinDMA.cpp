#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char* name;
   int stdNo;
};
int getInt(int min, int max, const char* prompt = nullptr);
void getStudent(Student& S);
void printStudent(const Student& S);
int main() {
   int nos; // nubmer of students;
   int i; // loop counter
   Student* stdnts = nullptr;
   nos = getInt(3, 80, "Please enter number of Students: ");
   stdnts = new Student[nos];
   for (i = 0; i < nos; i++) {
      getStudent(stdnts[i]);
   }
   for (i = 0; i < nos; i++) {
      printStudent(stdnts[i]);
   }
   for (i = 0; i < nos; i++) {
      delete[] stdnts[i].name;
   }
   delete[] stdnts;
   return 0;
}
void getStudent(Student& S) {
   bool ok = false;
   char tempName[51];
   while (!ok) {
      cout << "Enter student name: ";
      cin.getline(tempName, 50, '\n');
      if (cin.fail()) {
         cout << "Name is too long, enter again: ";
         cin.clear();
         cin.ignore(1000, '\n');
         ok = false;
      }
      else{
         S.name = new char[strlen(tempName) + 1];
         strcpy(S.name, tempName);
         ok = true;
      }
      if (ok) {
         S.stdNo = getInt(99999, 1000000, "Enter student nubmer: ");
      }
   }
}
void printStudent(const Student& S) {
   cout << "Name: " << S.name << ", Stno: " << S.stdNo << endl;
}
int getInt(int min, int max, const char* prompt) {
   int value = 0;
   bool done = false;
   if (prompt != nullptr) cout << prompt;
   while (!done) {
      cin >> value;
      if (cin.fail()) {
         cin.clear();
         cout << "Invlid Integer, try again please: ";
      }
      else {
         if (value < min || value > max) {
            cout << "Invalid value, [" << min << "<=value<=" << max << "]: ";
         }
         else {
            done = true; // all good;
         }
      }
      cin.ignore(1000, '\n');
   }
   return value;
}