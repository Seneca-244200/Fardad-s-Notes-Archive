#include "dynArr.h"

namespace oop244{
   DynArr::DynArr(){
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
   void DynArr::resize(int newsize){
      if (newsize > 0){
         double* temp = new double[newsize];
         int i;
         for (i = 0; i < _size && i < newsize; i++){
            temp[i] = _data[i];
         }
         _size = newsize;
         if (!empty()){
            delete[] _data;
         }
         _data = temp;
      }
      else{
         if (!empty()){
            delete[] _data;
         }
         _size = 0;
      }
   }
   bool DynArr::empty(){
      return _data == (double*)0;
   }
   int DynArr::size()const{
      return _size;
   }
   double& DynArr::element(int index){
      if (index >= _size){
         resize(index + 1);
      }
      if (!empty() && index >= 0){
         return _data[index];
      }
      else{
         return _junk;
      }
   }
   double& DynArr::operator[](int index){
      return element(index);
   }
   DynArr::~DynArr(){
      if (!empty()){
         delete[] _data;
      }
   }
}