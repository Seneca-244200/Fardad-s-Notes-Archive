#include "dynArr.h"
namespace oop244{
   DynArr::DynArr(){
      //_data = nullptr;
      _data = (double*)0;
      _size = 0;
   }
   DynArr::DynArr(int size){
      _data = new double[_size = size];
   }
   DynArr::DynArr(const double* dblArr, int size){
      _data = new double[_size = size];
      for (int i = 0; i < _size; i++){
         _data[i] = dblArr[i];
      }
   }
   double& DynArr::element(int index){
      if (!empty() && index >= 0 && index < _size){
         return _data[index];
      }
      else{
         return _junk;
      }
   }
   DynArr::~DynArr(){
      delete[] _data;
   }

   bool DynArr::empty(){
      return _data == (double*)0;
   }
   int DynArr::size()const{
      return _size;
   }

}


