#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
   public:
      IntArray(int size = 1);
      // rule of three!!!!
      // if your sources are outside of the
      // scope of your class 
      // you must implement the following:
      // 1- copy constructor
      // 2- copy assignment
      // 3- destructor
      IntArray(const IntArray& C);
      IntArray& operator= (const IntArray& C);
      ~IntArray();


      int& operator[](int index);
      int size()const;
      void resize(int newsize);
   };
}
#endif // !SDDS_INTARRAY_H
