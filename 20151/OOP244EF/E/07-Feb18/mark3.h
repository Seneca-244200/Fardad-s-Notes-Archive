#ifndef __FS_MARK3_H__
#define __FS_MARK3_H__
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
    Mark dspWMark()const;  // display weighed mark
    Mark dspSubCode()const; // display subject code
    Mark dspSubName()const; // display subject name
    Mark space()const; // displays a space
    Mark nl()const;  // goes to new line;
    ~Mark();
  };
}
#endif