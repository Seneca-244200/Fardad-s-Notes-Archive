#include <cstring>
#include <iostream>
using namespace std;
#include "container.h"


namespace oop244f{
  void Container::set(const char contentType[],  // sets everything in one shot
    const char unit[],
    double capacity,
    double quantity){
    setContentType(contentType);
    setUnit(unit);
    setCapacity(capacity);
    setQuantity(quantity);   
  }
  // compares two doubles based on QUANTITY_PRECISION
  // this is to compare quantity values
  // returns > 0 if left > right
  // returns < 0 if left < right
  // reutrn 0 if equal 
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
  void Container::setContentType(const char* contentType){
    strcpy(_contentType, contentType);
  }
  const char* Container::getContentType()const{
    return _contentType;
  }
  void Container::setUnit(const char* unit){
    strcpy(_unit, unit);
  }
  const char* Container::getUnit()const{
    return _unit;
  }
  void Container::setCapacity(double capacity){
    _capacity = capacity;
  }
  double Container::getCapacity()const{
    return _capacity;
  }
  void Container::setQuantity(double quantity){ 
    if (compare(quantity, _capacity) > 0){  // if quantity is greater than capacity, 
      _spilled = true;                      // note that it spilled
      quantity = _capacity;               // adjust the quantity to the maximum it can be (capacity)
    }
    else{                                // else 
      _spilled = false;                     //  no spill
    }
    _quantity = quantity;
  }
  double Container::empty(){ 
    double pourOut = _quantity;   //holds the amount to pour out
    _quantity = 0.0;              // empties the container
    return pourOut;               // returns the whole amount
  }
  double Container::empty(double quantity){
    double quanOut = quantity;                    // holds how much to empty
    if (compare(_quantity , quantity)<0){        // if _quantity of containter < quantity to pour out         
      quanOut = _quantity;                       // changes the actual quantity out ammount
      _quantity = 0.0;                           // makes the container empty
    }
    else{
      _quantity -= quantity;
    }
    return quanOut;
  }
  double Container::fill(double quantity){  
    double overflow = 0.0;                      // assumes there is no overflow
    _spilled = false;                           // assumes there will be no spill
    _quantity += quantity;                      // adds the filling amount to _quantity of container
    if (compare(_quantity , _capacity) > 0){    // if _quantity of container > _capacity of container  (spilled)
      overflow = _quantity - _capacity;         // finds the amount of overflow (spill)
      _quantity = _capacity;                    // makse the container full
      _spilled = true;                          // makes sure it remember that it spilled when filled
    }
    return overflow;                              // returns the amount of spillage
  }
  double Container::getQuantity()const{
     return _quantity;                        
  }
  void Container::display()const{                // comprehensively displays a container. 
    cout << "This " << _capacity << " " << _unit <<(compare(_capacity, 0.0) != 0 ? "s " : " ")<< _contentType << "-container, ";
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
  bool Container::isFull()const{
    return compare(_quantity, _capacity) == 0;
  }
  bool Container::isEmpty()const{
    return compare(_quantity, 0.0) == 0;
  }
  bool Container::spilled()const{
    return _spilled;
  }
}