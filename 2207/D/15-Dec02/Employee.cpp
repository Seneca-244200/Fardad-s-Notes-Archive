#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"
#include "utils.h"
namespace sdds {
   Employee::Employee(const char* name, long empno):m_empno(empno) {
      setname(name);
      clog << "Createing " << *this << endl;
   }
   Employee::Employee(const Employee& E) {
      //*this = E;
      operator=(E);
      clog << "Copied " << E << endl;
   }
   Employee& Employee::operator=(const Employee& Roper) {
      setname(Roper.m_name);
      m_empno = Roper.m_empno;
      clog << "Assigned to " << Roper << endl;
      return *this;
   }

   Employee::~Employee() {
      clog << "Deleting " << *this << endl;
      delete[] m_name;
   }
   istream& Employee::read(istream& istr) {
      char name[26] = "";
      cout << "Name: ";
      istr.get(name, 26, '\n');
      istr.ignore(1000, '\n');
      setname(name);
      getnum(m_empno, 10000L, 99999L, "Enter Employee number: ", istr);
      return istr;
   }
   void Employee::setname(const char* name) {
      delete[] m_name;
      m_name = new char[strlen(name) + 1];
      strcpy(m_name, name);
   }
   ostream& Employee::write(ostream& ostr)const {
      return ostr << setw(25) << left << setfill('.') << m_name << " (" << m_empno << ")";
   }
   ostream& operator<< (ostream& ostr, const Employee& E) {
      return E.write(ostr);
   }
   istream& operator>>(istream& istr, Employee& E) {
      return E.read(istr);
   }
}