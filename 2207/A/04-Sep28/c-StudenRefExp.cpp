#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char* m_name;
   int m_studentNumber;
   double m_gpa;
};
void get(Student& Sr) {
   char name[256];
   cout << "Name: ";
   cin.getline(name,255);
   Sr.m_name = new char[strlen(name) + 1];
   strcpy(Sr.m_name, name);
   cout << "Stno: ";
   cin >> Sr.m_studentNumber;
   cout << "GPA: ";
   cin >> Sr.m_gpa;
}
void show(const Student& Sr) {
   cout << Sr.m_name << ", " << Sr.m_studentNumber << 
      ", GPA: " << Sr.m_gpa << endl;
}
void deleteStudent(Student& Sr) {
   delete[] Sr.m_name;
   Sr.m_name = nullptr;
}
int main() {
   Student St;
   get(St);
   // processs
   show(St);
   deleteStudent(St);
   return 0;
}