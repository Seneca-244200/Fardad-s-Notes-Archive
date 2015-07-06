#ifndef __FS_MARK2_H__
#define __FS_MARK2_H__

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
    void dspWMark()const;  // display weighed mark
    void dspSubCode()const; // display subject code
    void dspSubName()const; // display subject name
    void space()const; // displays a space
    void nl()const;  // goes to new line;
    ~Mark();
  };
}
#endif