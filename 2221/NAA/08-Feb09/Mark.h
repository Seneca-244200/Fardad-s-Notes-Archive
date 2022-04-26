#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
#include <iostream>
#define SDDS_DEBUG
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
      Mark(const Mark& toCopyFrom);
      Mark(const char* titleOfMark,
         int markValue = 0,
         int maxValueForMark = 100);
      // destructor  (not a function)
      ~Mark();
      // modifiers
      Mark& set(int markValue);
      Mark& setTitle(const char* titleOfMark);
      Mark& setMaxValue(int maxValue);
      Mark& set(const char* titleOfMark, 
               int markValue = 0, 
               int maxValueForMark = 100);
      Mark& read(const char* prompt = nullptr);
      
      // queries
      std::ostream& display(const char* message = nullptr)const;
      int max()const;
      int value()const;
      const Mark& grade(char* grade)const;
      int percent()const;
      bool isEmpty()const;
   };
   extern int MaxMarkValue;
}
#endif // !SDDS_MARK_H
