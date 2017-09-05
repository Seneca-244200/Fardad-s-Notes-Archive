#ifndef SICT_CONTAINER_H_
#define SICT_CONTAINER_H_
#define QUANTITY_PRECISION (0.001)
namespace sict{

  struct Container{
  private:
    double _capacity;    // member variables, or attributes
    double _quantity;
    char _contentType[41];
    char _unit[31];
    // compare: 
    // returns > 0 if left > right
    // returns < 0 if left < right
    // reutrn 0 if equal 
    int compare(double left, double right)const;
  public:
    void set(const  char contentType[],
      const  char unit[],
      double capacity,
      double quantity);
    void conEntry();
    void display()const;
    bool isFull()const;
    bool isEmpty()const;
  };

}

#endif
