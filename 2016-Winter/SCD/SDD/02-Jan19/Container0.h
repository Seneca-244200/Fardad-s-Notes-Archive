#ifndef SICT_CONTAINER_H_
#define SICT_CONTAINER_H_
class Container{
private:
  double _value;
  double _volume;
  char _name[41];
public:
  void setContainer();
  void setContainer(double value);
  void setContainer(double value, double volume);
  void name(const char value[]);
};
#endif