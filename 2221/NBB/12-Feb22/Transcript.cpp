#include <iostream>
#include "Transcript.h"
using namespace std;
namespace sdds {
   Transcript& Transcript::setEmptyState() {
      delete[] m_marks;
      m_marks = nullptr;
      m_studentNumber = 0;
      m_noOfMarks = 0;
      return *this;
   }
   Transcript::operator bool() const {
      // if student number is not zero, student is valid.
      return m_studentNumber != 0;
   }  
   Transcript& Transcript::calculateGPA() {
      float gpa = 0.0;
      for (unsigned i = 0u; i < m_noOfMarks; i++) {
         gpa += m_marks[i].gpa();
      }
      if (m_noOfMarks > 0) {
         gpa = gpa / m_noOfMarks;
         // DV: to be developed
         // m_studentNameAndGpa.setToGpa();
      }
      return *this;
   }
   Transcript::Transcript() { // just needs to remain empty
   }
   Transcript::Transcript(const char* stName, 
                          unsigned int studentNumber, 
                          unsigned short year) {
      // what is the business logic for validation?
      // DV: implement valaidation 
      setStudent(stName, studentNumber);
      m_year = year;
      // else nothing is set therefore we are in a safe empty state
   }
   Transcript::Transcript(const Transcript& T) {
      operator=(T);
   }

   Transcript& Transcript::operator=(const Transcript& T) {
      if (this != &T) {
         m_studentNameAndGpa = T.m_studentNameAndGpa;
         m_studentNumber = T.m_studentNumber;
         m_noOfMarks = T.m_noOfMarks;
         m_year = T.m_year;
         delete[] m_marks;
         m_marks = nullptr;  // this is applying specific business 
                             // logic to deep copying 
         if (m_noOfMarks > 0) {
            m_marks = new Mark[m_noOfMarks];
            for (unsigned int i = 0u; i < m_noOfMarks; i++) {
               m_marks[i] = T.m_marks[i];
            }
         }
      }
      return *this;
   }
   
   Transcript::~Transcript() {
      delete[] m_marks;
   }


   unsigned int Transcript::count() const {
      return m_noOfMarks;
   }
   Mark& Transcript::operator[](unsigned int index) {
      return m_marks[index % count()];
   }
   std::ostream& Transcript::display(std::ostream& ostr) {
      // DV: apply formatting based on business logic
      cout << "Student Name: " << (const char*)m_studentNameAndGpa << endl;
      cout << "Student Number: " << m_studentNumber << endl;
      for (unsigned int i = 0u; i < count(); i++) {
         ostr << m_marks[i] << endl;
      }
      calculateGPA();
      ostr.setf(ios::fixed);
      ostr.precision(1);
      ostr << "GPA: " << m_studentNameAndGpa.gpa() << endl;
      return ostr;
   }
   Transcript& Transcript::setStudent(const char* name, unsigned int studentNumber) {
      //DV: validation
      if (name) {
         m_studentNameAndGpa.set(name);
         m_studentNumber = studentNumber;
      }
      else {
         setEmptyState();
      }
      return *this;
   }
   Transcript& Transcript::addMark(const Mark& M) {
      if (M) {
         Mark* expandedMarks = new Mark[m_noOfMarks + 1];
         for (unsigned i = 0u; i < m_noOfMarks; i++) {
            expandedMarks[i] = m_marks[i];
         }
         delete[] m_marks;
         m_marks = expandedMarks;
         m_marks[m_noOfMarks] = M;
         m_noOfMarks++;
      }
      return *this;
   }
}