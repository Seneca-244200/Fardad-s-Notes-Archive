#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
#include <iostream>
//#define SDDS_DEBUG
// using namespace std; not allowed here in a header
namespace sdds {
   class Mark {
      char* m_title;  // dynamic
      int m_value;   // 20
      int m_max;  // 25
      void setSafeEmpty();
      void deAllocSafely();

   public:
      // constructors (not functions)
      Mark(); 
      // rule of three
      // destructor  (not a function)
      ~Mark();
      Mark(const Mark& toCopyFrom); // copy constructor
      Mark& operator=(const Mark& toCopyFrom); // copy assignment

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
      Mark& read(const char* prompt = nullptr);
      
      // queries
      std::ostream& display(const char* message = nullptr, std::ostream& ostr = std::cout)const;
      int max()const;
      int value()const;
      const Mark& grade(char* grade)const;
      int percent()const;
      bool isEmpty()const;
   };
   std::ostream& operator<<(std::ostream& LO, const Mark& RO);
   extern int MaxMarkValue;
}
#endif // !SDDS_MARK_H
