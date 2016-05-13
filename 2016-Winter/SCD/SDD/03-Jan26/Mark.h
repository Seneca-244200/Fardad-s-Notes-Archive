#ifndef SICT_MARK_H_
#define SICT_MARK_H_
namespace sict{
  class Mark{
  private:
    int outOf_;
    int rawMark_;
  public:
    int outOf()const;
    void outOf(int value);
    int rawMark()const;
    void rawMark(int value);
    int weightedMark()const;
    //~fardad.soleimanloo/submit q2 <ENTER>
    char grade()const;
    // returns A if > 80
    // returns B if > 70
    // returns C if > 60
    // returns D if > 50
    // returns F otherwise
  };




}

#endif
