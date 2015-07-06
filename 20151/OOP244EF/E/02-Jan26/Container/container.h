#ifndef __FS_CONTAINER_H__
#define __FS_CONTAINER_H__
namespace oop244e{
  struct Container{
    double _capacity;
    char _contentType[41];
    double _quantity;
    char _unit[41];
    void setContentType(const char contentType[]);  // sets the type of conent a container can hold
    const char* getContentType();                   // gets and returns the conent type to the caller progeram
    double fill(double quantity);        // fill the container with "quantity" amount of "_contentType",
    // if the quantity overflows the "_capacity", it will return
    // the spillage amount, otherwise zero, (obviously)


  };
}
#endif
