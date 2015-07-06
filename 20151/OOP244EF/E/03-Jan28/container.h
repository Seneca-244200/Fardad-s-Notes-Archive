#ifndef __FS_CONTAINER_H__
#define __FS_CONTAINER_H__
namespace oop244e{
  struct Container{
  private:
    double _capacity;
    double _quantity;
    char _contentType[41];
    char _unit[31];
    bool _spilled;
  public:
    void set(const char contentType[],
      const char unit[],
      double capacity,
      double quantity);
    void display()const;
    double fill(double quantity);
    bool spilled()const;
  };
}
#endif
