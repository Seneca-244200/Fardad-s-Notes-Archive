#include "Transcript.h"
namespace sdds {
   Transcript& Transcript::setEmptyState() {
      return *this;
   }
   Transcript& Transcript::calculateGPA() {
      return *this;
   }
   Transcript::Transcript() {
   }
   Transcript::Transcript(const Transcript& T) {
   }

   Transcript& Transcript::operator=(const Transcript& T) {
      if (this != &T) {
          
      }
      return *this;
   }
   
   Transcript::~Transcript() {
   }

   Transcript::operator bool() const {
      return false;
   }
   unsigned int Transcript::count() const {
      return m_noOfMarks;
   }
   Mark& Transcript::operator[](unsigned int index) {
      return m_marks[index % count()];
   }
   std::ostream& Transcript::display(std::ostream& ostr) {
      return ostr;
   }
   Transcript& Transcript::setStudent(const char* name, unsigned int studentNumber) {
      return *this;
   }
}