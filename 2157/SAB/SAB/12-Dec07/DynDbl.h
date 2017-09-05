#ifndef SICT_DYNDBL_H__
#define SICT_DYNDBL_H__
namespace sict{
  class DynDbl{
    double* _data;
    int _size;
  public:
    DynDbl();
    DynDbl(int theSizeOfTheArray);
    DynDbl(const double* dblArr, int size);
    int size()const;
    virtual ~DynDbl();
   // double& elem(int index);
    double& operator[](int index);
    operator int();
    void resize(int newsize);
  };




}





#endif