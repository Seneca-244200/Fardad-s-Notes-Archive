#ifndef SICT_CONTAINER_H_
#define SICT_CONTAINER_H_
class Container{
private:
  double _value;
  double _volume;
  char _name[41];
public:
  void setContainer(double value=0.0, double volume=5.0);
  void name(const char value[]);
};
#endif
/*   main

Container C;
C.setContainer();
C.setContainer(3, 100);








*/