#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
#include <iostream>
//#define SDDS_DEBUG
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
      // rule of three:
      Mark(const Mark& toCopyFrom); // copy constructor
      Mark& operator=(const Mark& toAssingFrom); // copy assignment
      ~Mark(); // called automatiaclly when Mark is just about to die(destructor)
      // end rule of three
      bool isSafeEmpty()const;
      Mark& setMax(int maxValidMarkBalue);
      std::ostream& display(std::ostream &ostr = std::cout)const;
      int get()const;
      int max()const;
      Mark& set(int markValue);
      Mark& set(const char* title,
             int value=0, 
             int max = 100);
      const char* grade( char* grade)const;
      void read();
      int percent()const;
      // operattions
      Mark& add(const Mark& M);
      Mark& add(int value);

   };
   std::ostream& operator<<(std::ostream& ostr, const Mark& M);

   //Employee(const Employee&);  // copy constructor signature examples
   //Car(const Car&);
   //Name(const Name&);
}
#endif // !SDDS_MARK_H
