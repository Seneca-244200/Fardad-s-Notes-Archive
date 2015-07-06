#include "date.h"
#include "general.h"
#include <iomanip>
#include <iostream>
using namespace std;
namespace oop244{
  // returns a uniqe value out of date
  // this value is used to compare two dates
  int Date::value()const{
    return _year * 372 + _mon * 31 + _day;
  }

  // validate(), this is an optional private function to write
  // for validation logic and setting the _readErrorCode.
  // see the read() funciton description for more detail




  // mday():
  // returns the day of the month.
  // _mon value must be set for this to work
  // if _mon is invalid, this function returns -1
  // leap years are considered in this logic

  int Date::mdays()const{
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, -1 };
    int mon = _mon >= 1 && _mon <= 12 ? _mon : 13;
    mon--;
    return days[mon] + int((mon == 1)*((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0));
  }

  // constructors



  // member fucntions





  // operators





  // IO funtions



  // non-memeber operator overloads



}