#ifndef ICT_INTARRAY_H__
#define ICT_INTAEEAY_H__
namespace ict{
  class IntArray{
    int* data_;
    unsigned int size_;
  public:
    IntArray(unsigned int size = 0);
    unsigned int size()const;
    void size(unsigned int newsize);
    int& Element(unsigned int index);
    int& operator[](unsigned int index);
    ~IntArray();
  };





}



#endif