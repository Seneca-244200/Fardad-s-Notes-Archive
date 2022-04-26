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
      char m_tempGrade[3]{};
      void setSafeEmpty();     
      void setTitle(const char* title);
      void dealloc(); // deallocated memory safely
   public:
      Mark();   // called automatically when Mark is born (constructor)
      Mark(const char* title, 
              int markValue=0, 
               int MaxValueForMark = 100);
      // rule of three:
      //1 -Mark(const Mark&) = delete;  // forbids mark to be copied
      Mark(const Mark& toCopyFrom); // copy constructor
      //2-Mark& operator=(const Mark&) = delete; // forbids assignmetn
      Mark& operator=(const Mark& toAssingFrom); // copy assignment
      //3-
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
      const char* grade(char* grade = nullptr);
      void read();
      int percent()const;
      // operattions
      Mark& operator+=(const Mark& M);
      Mark& operator+=(int value);
      Mark operator+(int value)const;
      operator const char* ()const;
      Mark& operator++();
//      Mark& operator++(int);
      Mark operator++(int);
   };
   std::ostream& operator<<(std::ostream& ostr, const Mark& M);
   Mark operator+(int value, const Mark& rightOperand);
}
#endif // !SDDS_MARK_H
