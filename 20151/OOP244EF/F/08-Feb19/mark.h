#ifndef __FS_MARK_H__
#define __FS_MARK_H__
#include <iostream>
namespace oop244{
#define NULLNAMEPTR ((char*)0)

  class Mark{
    char* subName;
    char subCode[9];
    int value;
    int outOf;
    void allocate(int size);
    void deallocate();
  public:
    Mark(const char* subName, const char subCode[], int value, int outOf = 100);
    Mark(const Mark& CM);
    Mark();
    void setValue(int value);
    void setOutOf(int outOf);
    void setSubName(const char* subName);    // set subjectName
    void setSubCode(const char subCode[]);   // set subject Code
    Mark& add(const Mark& AM);
    const Mark& dspWMark()const;  // display weighed mark
    const Mark& dspSubCode()const; // display subject code
    const Mark& dspSubName()const; // display subject name
    const Mark& space()const; // displays a space
    const Mark& nl()const;  // goes to new line;
    // binary
    Mark operator+(const Mark& Rop)const;
   // assignment
    Mark& operator=(const Mark& Rop);
    int operator=(int value);
    Mark& operator=(const char* subName);
  // prefix unary
    Mark& operator++();
    Mark operator-();

  // postfix unary
    Mark operator++(int); // int only means it is postfix
// send an email with oop244f - op+= challenge subject
 //   Mark& operator+=(const char* addToSubname);  overload this to concat "addtoSubname" to subName attribute
    void display()const;
    
    ~Mark();
    friend Mark operator-(const Mark& Lop, const Mark& Rop);
  };

  Mark operator-(const Mark& Lop,const Mark& Rop);
  std::ostream& operator<<(std::ostream& os, const Mark& Rop); // since I did not add (using namespace std),I had to add std:: to ostream

}

#endif