#ifndef SICT_CONTAINER_H_
#define SICT_CONTAINER_H_

namespace sict{
  class Container{
  private:
    double _value;
    double _volume;
  public:
    void setConteiner(double value=0.0, double volume=5.0);
    void volume(double val);
    double volume();

  };

}


#endif
