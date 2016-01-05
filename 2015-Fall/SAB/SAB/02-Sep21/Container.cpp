#include <cstring>
#include <iostream>
#include "Container.h"
using namespace std;
namespace sict{

  void Container::set(const char contentType[],
    const char unit[],
    double capacity,
    double quantity){
    strncpy(_contentType, contentType, 40);
    _contentType[40] = (char)0;
    strncpy(_unit, unit, 30);
    _unit[30] = 0;
    _capacity = capacity;
    _quantity = quantity;
  }

  void Container::display()const{                // comprehensively displays a container. 
    cout << "This " << _capacity << " " << _unit << (compare(_capacity, 0.0) != 0 ? "s " : " ") << _contentType << "-container, ";
    if (isFull()){
      cout << "is full!" << endl;
    }
    else if (isEmpty()){
      cout << "is empty!" << endl;
    }
    else{
      cout << "contains " << _quantity << " " << _unit << "(s) of "
        << _contentType << endl;
    }
    cout << endl;
  }
  int Container::compare(double left, double right)const{
    double diff = left - right;
    int ret = 1;  // if left > right
    if (diff > -QUANTITY_PRECISION && diff < QUANTITY_PRECISION){
      ret = 0;
    }
    else if (left < right){
      ret = -1;
    }
    return ret;
  }
  bool Container::isFull()const{
    return compare(_quantity, _capacity) == 0;
  }
  bool Container::isEmpty()const{
    return compare(_quantity, 0.0) == 0;
  }

}