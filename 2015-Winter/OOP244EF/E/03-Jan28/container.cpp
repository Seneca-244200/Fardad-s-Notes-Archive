#include <cstring>
#include <iostream>
//must qualify the memebers if not used
using namespace std; 
#include "container.h"

namespace oop244e{
  void Container::set(const char contentType[],
    const char unit[],
    double capacity,
    double quantity){
    _spilled = false;
    _capacity = capacity;
    _quantity = quantity;
    std::strcpy(_contentType, contentType);
    std::strcpy(_unit, unit); // if not using namespace std;
  }
  void Container::display()const{
    cout << "this " << _capacity << " " << _unit
      << " " << _contentType << "-container contains "
      << _quantity << " " << _unit << "(s)" << " of "
      << _contentType << endl;
  }
  double Container::fill(double quantity){
    double overflow = 0.0;                      // assumes there is no overflow                         // assumes there will be no spill
    _quantity += quantity;   // adds the filling amount to _quantity of container
    double diff = _quantity - _capacity;
    _spilled = false;
    if (diff > 0.0001 && diff < -0.0001){    // if _quantity of container > _capacity of container  (spilled)
      overflow = _quantity - _capacity;         // finds the amount of overflow (spill)
      _quantity = _capacity;                    // makse the container full
      _spilled = true;
    }
    return overflow;                              // returns the amount of spillage
  }
  bool Container::spilled()const{
    return _spilled;
  }
}