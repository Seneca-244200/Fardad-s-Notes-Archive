#ifndef SDDS_MARK_H
#define SDDS_MARK_H
#include <iostream>
//#define SDDS_DEBUG

namespace sdds {
   class Mark {
      char* m_title;  // dynamic
      int m_value;   
      int m_max;  
      void setSafeEmpty();
      void deAllocSafely();

   public:
      // constructors
      Mark(); 
      // rule of three
      ~Mark();// destructor  
      Mark(const Mark& toCopyFrom); // copy constructor
      Mark& operator=(const Mark& toCopyFrom); // copy assignment
      // end of rule of three
      Mark(const char* titleOfMark,
         int markValue = 0,
         int maxValueForMark = 100);
      // modifiers
      Mark& set(int markValue);
      Mark& setTitle(const char* titleOfMark);
      Mark& setMaxValue(int maxValue);
      Mark& set(const char* titleOfMark, 
               int markValue = 0, 
               int maxValueForMark = 100);
      std::istream& read(const char* prompt = nullptr, std::istream& istr = std::cin);
      
      // queries
      std::ostream& display(const char* message = nullptr, 
           std::ostream& ostr = std::cout)const;
      int max()const;
      int value()const;
      const Mark& grade(char* grade)const;
      int percent()const;
      bool isEmpty()const;

      // operator overloads
      bool operator==(const Mark& rO)const;
      bool operator!=(const Mark& rO)const;
      
      Mark operator+(const Mark& rO)const;

      Mark& operator<<(int value);
      Mark& operator<<(const char* title);
      const Mark& operator>>(int& mark)const;

      // type converion overloads
      operator bool()const;
      operator const char* ()const;

   };
   std::ostream& operator<<(std::ostream& LO, const Mark& RO);
   std::istream& operator>>(std::istream& LO, Mark& RO);
   extern int MaxMarkValue;
}
#endif // !SDDS_MARK_H
