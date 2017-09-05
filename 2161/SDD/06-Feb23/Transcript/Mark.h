#ifndef SICT_MARK_H_
#define SICT_MARK_H_
/*#define DSP_GRADE  0
#define DSP_GPA 1
#define DSP_MARK 2*/
const int DSP_GRADE = 0;
const int DSP_GPA = 1;
const int DSP_MARK = 2;
namespace sict{
  class Mark{
  private:
    int outOf_;
    int totalMark_;
  public:
    Mark();
    Mark(int totalMark);
    Mark(int totalMark, int outOf);
    ~Mark();
    int outOf()const;
    Mark& outOf(int value);  
    int totalMark()const;
    Mark& totalMark(int value);
    int weightedMark()const;
    char grade()const;
    double gpa()const;
    const Mark& display(int TypeToDisplay = DSP_GRADE)const;
  };
}

#endif
