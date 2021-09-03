#ifndef SDDS_CONTAINTER_H
#define SDDS_CONTAINTER_H
#include <iostream>
// using namespace is not allowed in
// a headerfile
namespace sdds {
   class Container {
   private:
      char m_content[81];
      double m_volume;
      Container& setSafeEmpty();
   public:
      Container();

      bool isSafeEmpty()const;
      bool operator!()const;



      Container& set(const char* content
         , double volume);
      //Container& set(double volume);
      //Container& set(const char* content);
      Container& operator=(double volume);
      Container& operator=(const char* content);
      std::ostream& print()const;
      
//      Container sum(const Container& Ro)const;
      Container operator+(const Container& Ro)const;



//      Container& add(double value);
      Container& operator+=(double value);
   };
}
#endif // !SDDS_CONTAINTER_H