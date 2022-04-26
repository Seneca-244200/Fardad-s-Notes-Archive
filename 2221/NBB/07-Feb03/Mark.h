#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
#include <iostream>
//using namespace std; not allowed because we are in a headerfile
namespace sdds {
   class Mark {
      char* m_title;
      int m_value;
      int m_max;
      void setSafeEmpty();     
      void setTitle(const char* title);
      void dealloc(); // deallocated memory safely
   public:
      Mark();   // called automatically when Mark is born (constructor)
      Mark(const char* title, 
              int markValue=0, 
               int MaxValueForMark = 100);
      ~Mark(); // called automatiaclly when Mark is just about to die(destructor)
      bool isSafeEmpty()const;
      Mark& setMax(int maxValidMarkBalue);
      std::ostream& display()const;
      int get()const;
      int max()const;
      Mark& set(int markValue);
      Mark& set(const char* title,
             int value=0, 
             int max = 100);
      void read();
      int percent()const;
   };

}
#endif // !SDDS_MARK_H
