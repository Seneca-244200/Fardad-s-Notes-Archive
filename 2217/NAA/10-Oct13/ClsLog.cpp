#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "ClsLog.h"
using namespace std;
namespace sdds {
   ClsLog::ClsLog() {
      strcpy(m_data, "D ");
      clog << "Defaulting ClsLog" << endl;
   }
   ClsLog::ClsLog(const char str[]) {
      strcpy(m_data, "I ");
      strcat(m_data, str);
      clog << "Instantiating " << str << endl;
   }
   ClsLog::ClsLog(const ClsLog& C) {
      strcpy(m_data, "C ");
      strcat(m_data, C.m_data);
      clog << "Copying " << C.m_data << endl;
   }

   ClsLog& ClsLog::operator=(const ClsLog& C) {
      if (this != &C) {
         clog << "Assigning " << m_data << " to " << C.m_data << endl;
         strcpy(m_data, "= ");
         strcat(m_data, C.m_data);
      }
      return *this;
   }

   ClsLog::~ClsLog() {
      clog << "Deleting " <<  m_data << endl;
   }

   std::ostream& ClsLog::display(std::ostream& ostr) const {
      return ostr << m_data;
   }

   std::istream& ClsLog::read(std::istream& istr) {
      int i;
      char ch;
      cout << "int,value: ";
      istr >> i;
      istr >> ch;
      if (ch != ',') {
         istr.setstate(ios::failbit);
      }
      else {
         istr.getline(m_data, 1024);
      }
      return istr;
   }

   std::ostream& operator<<(std::ostream& ostr, const ClsLog& C) {
      return C.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, ClsLog& C) {
      return C.read(istr);
   }

}