#include "Mark.h"
namespace sict{
  int Mark::outOf()const{
   // mark_ = 0; will cause error
    return outOf_;
  }
  void Mark::outOf(int value){
    outOf_ = value;
  }
  int Mark::rawMark()const{
    return rawMark_;
  }
  void Mark::rawMark(int value){
    rawMark_ = value;
  }
  // from here
  int Mark::weightedMark()const{
    return int(rawMark() / double(outOf()) * 100);
  }
  char Mark::grade()const{
    int wm = weightedMark();
    char ret = 'F';
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
  // to here
}