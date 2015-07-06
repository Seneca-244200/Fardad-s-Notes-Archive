#ifndef __FS_CONTAINER_H__
#define __FS_CONTAINER_H__

#define QUANTITY_PRECISION (0.001)

namespace oop244f{
  struct Container{
  private:
    double _capacity;
    double _quantity;
    char _contentType[41];
    char _unit[41];
    bool _spilled;
    int compare(double left, double right)const; 
    // returns > 0 if left > right
    // returns < 0 if left < right
    // reutrn 0 if equal 
  public:
    void set(const char contentType[],
      const char unit[],
      double capacity,
      double quantity);
    void setContentType(const char contentType[]);  // sets the type of conent a container can hold
    const char* getContentType()const;                   // gets and returns the conent type to the caller progeram
    double fill(double quantity);        // fill the container with "quantity" amount of "_contentType",
                                         // if the quantity overflows the "_capacity", it will return
                                         // the spillage amount, otherwise zero, (obviously)
    void display()const;
    void setUnit(const char* unit);
    const char* getUnit()const;
    void setCapacity(double capacity);
    double Container::getCapacity()const;
    void setQuantity(double quantity);
    double empty();
    double empty(double quantity);
    double getQuantity()const;
    bool isFull()const;
    bool isEmpty()const;
    bool spilled()const;
  };



}

#endif