#ifndef __FS_MARK_H__
#define __FS_MARK_H__
#include <iostream>
using namespace std;
namespace oop244{
#define NULLNAMEPTR ((char*)0)

  class Mark{
  private:
    char* subName;
    char subCode[9];
    int value;
    int outOf;
    bool allocate(int size);
    void deallocate();
  public:
    Mark(const char* subName, const char subCode[],
      int value, int outOf = 100);
    Mark(const Mark& CM);
    Mark();
    void setValue(int value);
    void setOutOf(int outOf);
    void setSubName(const char* subName);    // set subjectName
    void setSubCode(const char subCode[]);   // set subject Code
    const Mark& dspWMark()const;  // display weighed mark
    const Mark& dspSubCode()const; // display subject code
    const Mark& dspSubName()const; // display subject name
    const Mark& space()const; // displays a space
    const Mark& nl()const;  // goes to new line;
    ~Mark();

    // operator related stuff
    Mark& add(const Mark& RO);
    Mark& operator+=(const Mark& RO);
    Mark& operator=(const Mark& RO);

    Mark& addone();
    Mark& operator++();


    Mark operator++(int); // postfix, and int means nothing!!!!!
    Mark operator+(const Mark& RO)const;

    // friend ostream& operator<<(ostream& LOostream, const Mark& RO); 
    // if I did not have proper getter, or accessors, the above would have been needed.
  };
  // cout << ipc << endl;
  ostream& operator<<(ostream& LOostream, const Mark& RO);

}
#endif