#ifndef SDDS_MARK_H
#define SDDS_MARK_H
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
      void dealloc(); 
   public:
      Mark();  
      Mark(const char* title, 
              int markValue=0, 
               int MaxValueForMark = 100);
      // rule of three:
      Mark(const Mark& toCopyFrom); // copy constructor
      Mark& operator=(const Mark& toAssingFrom); // copy assignment
      ~Mark(); 
      // end rule of three

      bool isSafeEmpty()const;
      Mark& setMax(int maxValidMarkBalue);
      std::ostream& display(std::ostream &ostr = std::cout)const;
      int get()const;
      int max()const;
      Mark& set(int markValue);
      Mark& operator=(int markValue);
      Mark& set(const char* title,
             int value=0, 
             int max = 100);
      const char* grade(char* grade = nullptr);
      void read();
      int percent()const;
      // operations
      Mark& operator+=(const Mark& M);
      Mark& operator+=(int value);
      Mark operator+(int value)const;
      Mark operator+(const Mark& righOperand)const;
      operator const char* ()const;
      operator bool()const;
      Mark& operator++();
      Mark operator++(int);
      bool operator==(const Mark& rO)const; // no side effect
      // four different overlaods for gpa
      void gpa(float& gpa)const;
      void gpa(float* gpa)const;
      float gpa()const; // this would have been enough
      operator float()const;
      // end of gpa functions
   };
   std::ostream& operator<<(std::ostream& ostr, const Mark& M);
   int operator+(int value, const Mark& rightOperand);
}
#endif // !SDDS_MARK_H
