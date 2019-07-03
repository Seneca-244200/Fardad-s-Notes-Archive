#ifndef ICT_INTARRAY_H__
#define ICT_INTAEEAY_H__
namespace ict{
  class IntArray{
    int* m_data;
    unsigned int m_size;
  public:
    IntArray(unsigned int size = 0);
    IntArray(const IntArray& CP) = delete;
    IntArray& operator=(const IntArray& RO) = delete;
    unsigned int size()const;
    void resize(unsigned int newsize);
    int& at(unsigned int index);
    int& operator[](unsigned int index);
    ~IntArray();
  };
}
#endif