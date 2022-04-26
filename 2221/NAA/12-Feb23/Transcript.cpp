#include "Transcript.h"
namespace sdds {
   Transcirpt& Transcirpt::setStName(const char* name) {
      return *this;
   }
   Transcirpt& Transcirpt::setEmpty() {
      return *this;
   }
   Transcirpt::Transcirpt(const char* studentName, const char* semester, unsigned short year) {

   }
   Transcirpt& Transcirpt::operator=(const Transcirpt& rO) {
      return *this;
   }
   Transcirpt::Transcirpt(const Transcirpt& toCopyFrom) {

   }
   Transcirpt::~Transcirpt() {
   }
   Mark& Transcirpt::operator[](unsigned int index) {
      return m_mark[index % count()];
   }
   const Mark& Transcirpt::operator[](unsigned int index)const {
      return m_mark[index % count()];
   }
   Transcirpt& Transcirpt::operator+=(const Mark& rO) {
      return *this;
   }
   unsigned int Transcirpt::count() const {
      return m_count;
   }
}