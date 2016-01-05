#include <iostream>
using namespace std;

namespace oop244f{
  struct Container{
  private:
    double _capacity;
    double _quantity;
    char _contentType[41];
    char _unit[41];
  public:
    void setContentType(const char contentType[]);  // sets the type of conent a container can hold
    const char* getContentType();                   // gets and returns the conent type to the caller progeram
    double fill(double quantity);        // fill the container with "quantity" amount of "_contentType",
                                         // if the quantity overflows the "_capacity", it will return
                                         // the spillage amount, otherwise zero, (obviously)

  };



}