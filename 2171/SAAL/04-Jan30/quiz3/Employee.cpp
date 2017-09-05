#include "Employee.h"
#include <cstring>
#include <iostream>
using namespace std;
void Employee::name(const char* value) {
   strcpy(m_name, value);
}
const char* Employee::name()const {
   return m_name;
}
void Employee::empno(int value) {
   m_empno = value;
}
int Employee::empno()const {
   return m_empno;
}
void Employee::display()const {
   cout << name() << ", " << empno() << endl;
}
