#ifndef SICT_MARK_H_
#define SICT_MARK_H_
namespace sict{
  class Mark{
  private:
    int outOf_;
    int totalMark_;
  public:
    int outOf()const;
    void outOf(int value);  
    int totalMark()const;
    void totalMark(int value);
    int weightedMark()const;
    char grade()const;
    // write the grade query that returns one
    // letter grade 
    // if weightedMark >= 80 returns A
    // if weightedMark >= 70 returns B
    // if weightedMark >= 60 returns C
    // if weightedMark >= 50 returns D
    // OTHERWISE returns F
    // grade()
  };
}

#endif
