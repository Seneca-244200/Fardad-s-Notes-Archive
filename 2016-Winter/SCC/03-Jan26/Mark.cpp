#include "Mark.h"
namespace sict{
  int Mark::outOf()const{
    return outOf_;
  }
  void Mark::outOf(int value){
    outOf_ = value;
  }
  int Mark::totalMark()const{
    return totalMark_;
  }
  void Mark::totalMark(int value){
    totalMark_ = value;
  }

 
  int Mark::weightedMark()const{
    return int(totalMark() / double(outOf()) * 100);
  }
  //starts here
  char Mark::grade()const{
    char ret = 'F';
    int wm = weightedMark();
    if (wm >= 80){
      ret = 'A';
    }
    else if (wm >= 70){
      ret = 'B';
    }
    else if (wm >= 60){
      ret = 'C';
    }
    else if (wm >= 50){
      ret = 'D';
    }
    return ret;
  }
  // ends here
  //~fardad.soleimanloo/submit q2 <ENTER>

}

