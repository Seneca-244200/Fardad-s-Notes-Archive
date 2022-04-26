#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
#include <iostream>
// using namespace std; not allowed here in a header
namespace sdds {
   class Mark {
      char* m_title;  // dynamic
      int m_value;   // 20
      int m_max;  // 25
      void setSafeEmpty();
      void setTitle(const char* titleOfMark);
      // deallocating memory during the life time 
      // of the object
      void deAllocSafely();
      // runs only once before Mark is used
      void initialize();
      // runs only once after work with mark is done
      void clearAtEnd();
   public:
      // constructor (not a function)
      Mark(); // this procedure is automatically called 
              // right after createion of an object of Mark
      // destructor  (not a function)
      ~Mark(); // this procedure is automattially called
               // right before the death of the object

      // modifiers

      void set(int markValue);
      void setMaxValue(int maxValue);
      void set(const char* titleOfMark, 
               int markValue = 0, 
               int maxValueForMark = 100);
      void read(const char* prompt = nullptr);
      
      // queries
      std::ostream& display(const char* message = nullptr)const;
      int max()const;
      int value()const;
      void grade(char* grade)const;
      int percent()const;
      bool isEmpty()const;
   };
   extern int MaxMarkValue;
}
#endif // !SDDS_MARK_H
