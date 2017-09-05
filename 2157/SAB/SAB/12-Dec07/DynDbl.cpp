#include "DynDbl.h"
namespace sict{
  DynDbl::DynDbl(){
    //_data = nullptr;
    _data = (double*)0;
    _size = 0;
  }
  DynDbl::DynDbl(int size){
    _data = new double[_size = size];
  }
  DynDbl::DynDbl(const double* dblArr, int size){
    _data = new double[_size = size];
    for (int i = 0; i < _size; _data[i] = dblArr[i], i++);
  }
  int DynDbl::size()const{
    return _size;
  }
  DynDbl::~DynDbl(){
    delete[] _data;
  }
//  double& DynDbl::elem(int index){
  double& DynDbl::operator[](int index){
    if (index >= _size){
      resize(index + 5);
    }
    return _data[index];
  }
  DynDbl::operator int(){
     return size();
  }
  void DynDbl::resize(int newsize){
    double* temp = new double[newsize];
    int i;
    for (i = 0; i < _size && i < newsize; i++){
      temp[i] = _data[i];
    }
    _size = newsize;
    delete[] _data;
    _data = temp;
  }
}