#ifndef SDDS_TRANSCRIPT_H
#define SDDS_TRANSCRIPT_H
#include "Mark.h"
namespace sdds {
   class Transcirpt {
      char m_semester[10];
      char* m_studentName{ };
      Mark* m_mark{};
      unsigned int m_count{};
      // anything you can calculate do not store
      //Mark m_gpa;
      unsigned short int m_year;
      Transcirpt& setStName(const char* name);
      Transcirpt& setEmpty();
   public:
      Transcirpt(const char* studentName, const char* semester, unsigned short year);
      // rule of three
//      Transcirpt& operator=(const Transcirpt& rO) = delete;
//      Transcirpt(const Transcirpt& toCopyFrom) = delete;
      Transcirpt& operator=(const Transcirpt& rO);
      Transcirpt(const Transcirpt& toCopyFrom);
      ~Transcirpt();
      // end rule of three

      Mark& operator[](unsigned int index);
      const Mark& operator[](unsigned int index)const;

      Transcirpt& operator+=(const Mark& rO);

      // query
      unsigned int count()const;

   };



}

#endif // !SDDS_TRANSCRIPT_H
