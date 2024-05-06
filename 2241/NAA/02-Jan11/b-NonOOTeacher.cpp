#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct Teacher {
   char m_subject[7]{};
   char m_name[41]{};
   int m_rating{};
   int m_grading{};
};
void setTeacher(Teacher* T, const char* subject, const char* name, int rating, int grading) {
   strcpy(T->m_name, name);
   strcpy(T->m_subject, subject);
   T->m_rating = rating;
   T->m_grading = grading;
}
void printTeacher(const Teacher* T) {
   cout << T->m_name << ": subject (" << T->m_subject << ")" << endl
      << "Rating: " << T->m_rating << endl
      << "Grading: " << T->m_grading << endl;
}
int main() {
   cout << "Hello OOP244NAA" << endl;
   Teacher T;
   setTeacher(&T, "OOP244", "Fred Soley", 4, 10);
   printTeacher(&T);
   return 0;
}














