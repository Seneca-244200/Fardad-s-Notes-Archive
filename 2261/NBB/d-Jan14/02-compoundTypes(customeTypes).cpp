#include <iostream>
using namespace std;
struct Job {
   char m_title[81];
   double m_salary;
};
struct Employee {
   size_t m_empno;
   char m_name[61];
   Job m_job;
};
void print(Employee a) {
   cout << "Name: " << a.m_name << endl;
   cout << "ID: " << a.m_empno << endl;
   cout << "Job title: " << a.m_job.m_title << endl;
   cout << "Salary: " << a.m_job.m_salary << endl;
}
void print(const Employee* a) {
   cout << "Name: " << a->m_name << endl;
   cout << "ID: " << a->m_empno << endl;
   cout << "Job title: " << a->m_job.m_title << endl;
   cout << "Salary: " << a->m_job.m_salary << endl;
}
int main() {
   cout << "OOP244 NBB Jan 14" << endl;
   Employee Empty{};
   Employee E{ 12345, "Fred Soley" ,{"Teacher" , 10.22}};
   print(E);
   print(&E);
   return 0;
}