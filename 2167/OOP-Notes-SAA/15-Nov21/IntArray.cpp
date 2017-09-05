#include "IntArray.h"

namespace ict{

  IntArray::IntArray(unsigned int size):size_(size){
    if (size_ == 0) size_ = 1;
    data_ = new int[size_];
  }
  unsigned int IntArray::size()const{
    return size_;
  }

  void IntArray::size(unsigned int newsize){
    int i;
    if (newsize == 0) newsize = 1;
    int* temp = new int[newsize];
    for (i = 0; i<size_ && i < newsize; i++){
      temp[i] = data_[i];
    }
    delete[] data_;
    data_ = temp;
    size_ = newsize;
  }
  int& IntArray::Element(unsigned int index){
    if (index >= size_) size(index + 1);
    return data_[index ];
  }
  int& IntArray::operator[](unsigned int index){
    return Element(index);
  }

  IntArray::~IntArray(){
    delete[] data_;
  }
   
}

