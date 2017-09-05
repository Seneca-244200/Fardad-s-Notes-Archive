#ifndef ICT_ARRAYTEMP_H__
#define ICT_ARRAYTEMP_H__
namespace ict{

  template <typename type>
  class Array{
    type* data_;
    unsigned int size_;
  public:
    Array(unsigned int size = 0);
    Array(const Array<type>& A){
      data_ = new type[A.size()];
      size_ = A.size_;
      for (int i = 0; i < size_; i++){
        data_[i] = A.data_[i];
      }
    }
    Array<type>& operator=(const Array<type>& A);
    unsigned int size()const{
      return size_;
    }
    void size(unsigned int newsize){
      int i;
      if (newsize == 0) newsize = 1;
      type* temp = new type[newsize];
      for (i = 0; i<size_ && i < newsize; i++){
        temp[i] = data_[i];
      }
      delete[] data_;
      data_ = temp;
      size_ = newsize;
    }
    type& Element(unsigned int index){
      if (index >= size_) size(index + 1);
      return data_[index];
    }
    type& operator[](unsigned int index){
      return Element(index);
    }

    ~Array(){
      delete[] data_;
    }
  };

  template <typename Tp>
  Array<Tp>& Array<Tp>::operator=(const Array<Tp>& A){
    if (this != &A){
      delete[] data_;
      data_ = new Tp[A.size()];
      size_ = A.size_;
      for (int i = 0; i < size_; i++){
        data_[i] = A.data_[i];
      }
    }
    return *this;
  }
  template <typename type>
  Array<type>::Array(unsigned int size = 0) :size_(size){
    if (size_ == 0) size_ = 1;
    data_ = new type[size_];
  }

}


#endif