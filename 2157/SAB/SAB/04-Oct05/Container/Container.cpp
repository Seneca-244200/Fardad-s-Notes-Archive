#include <cstring>
#include <iostream>
#include "Container.h"
using namespace std;
namespace sict{
  Container::Container(){
    _contentType[0] = 0;
    _unit[0] = '\0';
    _capacity = -1;
    _quantity = -1;
  }
  Container::Container(const char contentType[]){
    set(contentType, "", 0, 0);
  }
  Container::Container(const  char contentType[],
    const  char unit[],
    double capacity,
    double quantity){
    set(contentType, unit, capacity, quantity);
  }
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
  Container::~Container(){
    cout << _contentType << " Container is dying!" << endl;
  }
  void Container::display()const{                // comprehensively displays a container. 
    if (_capacity < 0){
      cout << "This Container is not set yet!" << endl;
    }
    else{
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
    bool ret = false;
    if (compare(_quantity, 0) == 0){
      ret = false;
    }
    else if (compare(_quantity, _capacity) == 0){
      ret = true;
    }
    return  ret;
  }
  bool Container::isEmpty()const{
    return compare(_quantity, 0.0) == 0;
  }

}