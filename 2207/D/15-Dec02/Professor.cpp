#include <iostream>
#include <iomanip>
using namespace std;
#include "Professor.h"
#include "utils.h"
namespace sdds {
   void Professor::setsubjct(const char* subjects) {
      delete[] m_subjects;
      m_subjects = new char[strlen(subjects) + 1];
      strcpy(m_subjects, subjects);
   }
   Professor::Professor(const Professor& P):Employee(P) {
      setsubjct(P.m_subjects);
      clog << "Copying " << *this << endl;
   }
   Professor& Professor::operator=(const Professor& Roper) {
      Employee::operator=(Roper);
      //static_cast<Employee>(*this) = Roper;
      setsubjct(Roper.m_subjects);
      clog << "Assigning " << *this << endl;
      return *this;
   }
   Professor::Professor(const char* name, long emplno, const char* subjects)
      :Employee(name, emplno) {
      setsubjct(subjects);
      clog << "Creating " << *this << endl; 
   }
   istream& Professor::read(istream& istr) {
      Employee::read();
      char sub[41] = "";
      cout << "Subject codes: ";
      istr.get(sub, 41, '\n');
      istr.ignore(1000, '\n');
      setsubjct(sub);
      return istr;
   }

   ostream& Professor::write(ostream& ostr) const {
      return Employee::write(ostr) << " " << setw(40) << setfill('.') << right << m_subjects;
   }

   Professor::~Professor() {
      clog << "Deleing " << *this << endl;
      delete[] m_subjects;
   }
}