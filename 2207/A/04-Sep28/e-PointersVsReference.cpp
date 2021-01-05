#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char* m_name;
   int m_studentNumber;
   double m_gpa;
};

bool readGPA(double& gpa) {
   bool ok = false;
   do {
      // scanf("%d", &gpa);  // because gpa is a ref and works exactly like the variable itself
      cin >> gpa;
      if (gpa > 4.000001 || gpa < -0.0000000001)
         cout << "Bad gpa value try again: ";
      else
         ok = true;
   } while (!ok);
}
bool readGPA(double* gpa) {
   bool ok = false;
   do {
      // scanf("%d", gpa);
      cin >> *gpa;
      if (*gpa > 4.000001 || *gpa < -0.0000000001)
         cout << "Bad gpa value try again: ";
      else
         ok = true;
   } while (!ok);
}

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
   readGPA(Sr.m_gpa);// calling the readGPA by ref function
   readGPA(&Sr.m_gpa); // calling the readGPA by address function 
}
void get(Student* sptr) {
   char name[256];
   cout << "Name: ";
   cin.getline(name, 255);
   Sr.m_name = new char[strlen(name) + 1];
   strcpy(sptr->m_name, name);
   cout << "Stno: ";
   cin >> sptr->m_studentNumber;
   cout << "GPA: ";
   cin >> sptr->m_gpa;
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