/***********************************************************************
// Displayer Template
// File	Displeyer.h
// Version 1.0
// Date	2021/11/25
// Author	Fardad Soleimanloo
// Description
// Template requrements
// The templated type should comply and emplement the rule of three
// insertion and extraction operators must be implemented for cout and cin
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/

#include <iostream>
#ifndef SDDS_DISPLAYER_H
#define SDDS_DISPLAYER_H
namespace sdds {
   template <typename type>
   class Displayer {
      type m_data{};
   public:
      Displayer() {
      }
      Displayer(type data);
      std::ostream& show(std::ostream& ostr)const {
         return ostr << m_data;
      }
      Displayer<type>& operator=(type data);
      std::istream& read(std::istream& istr) {
         return istr >> m_data;
      }
      virtual ~Displayer() {
      }
   };

   template <typename type>
   Displayer<type>::Displayer(type data) {
      m_data = data;
   }

   template <typename type>
   Displayer<type>& Displayer<type>::operator=(type data) {
      m_data = data;
      return *this;
   }
   template <class type>  // class is the same as typename here
   std::ostream& operator<<(std::ostream& ostr, const Displayer<type>& ro) {
      return ro.show(ostr);
   }
   template <typename type>
   std::istream& operator>>(std::istream& istr, Displayer<type>& ro) {
      return ro.read(istr);
   }


}

#endif