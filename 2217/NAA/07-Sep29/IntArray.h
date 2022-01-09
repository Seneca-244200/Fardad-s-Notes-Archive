#ifndef SDDS_INTARRAY
#define SDDS_INTARRAY
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
      void resize(int newsize);
   public:
      IntArray(int size);
//      int& element(int index);
      int& operator[](int index);
      ~IntArray();
      int size()const;
   };
}

#endif // !SDDS_INTARRAY


