#ifndef SDDS_TRANSCRIPT_H
#define SDDS_TRANSCRIPT_H
#include <iostream>
// using namespace std is not allowed in a header file
#include "Mark.h"
namespace sdds {
   class Transcript {
      unsigned int m_studentNumber{};
      unsigned short int m_year{};
      Mark* m_marks{};// mark title is for the course
      unsigned int m_noOfMarks{};
      Mark m_studentNameAndGpa{}; // call default constructor
      Transcript& setEmptyState();
      Transcript& calculateGPA();
   public:
      // constructors
      Transcript();
      Transcript(const char* stName,
         unsigned int studentNumber,
         unsigned short year);
      // Rule of three
      Transcript(const Transcript& T);
      Transcript& operator=(const Transcript& T);
      ~Transcript();
      // end of rule of three
      //Queries;
      // safe empty state testing
      operator bool()const;
      unsigned int count()const; // returns the number of marks in Transcript
      Mark& operator[](unsigned int index);
      std::ostream& display(std::ostream& ostr = std::cout);
      // Modifiers:
      Transcript& setStudent(const char* name, unsigned int studentNumber);
      Transcript& addMark(const Mark& M);
   };
}

#endif // !SDDS_TRANSCRIPT_H
