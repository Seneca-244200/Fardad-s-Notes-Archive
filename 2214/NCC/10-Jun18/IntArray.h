#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
 //     int* m_data = nullptr;
      int* m_data{};
      int m_size;
   public:
      IntArray(int size = 1);

      // these are applying rule of three
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& I);
      ~IntArray();

      int& operator[](int index);
      int size()const;
      void resize(int newsize);
   };
}

#endif // !SDDS_INTARRAY_H