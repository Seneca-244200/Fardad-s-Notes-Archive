#pragma once
#ifndef SDDS_DBLARRAY_H_
#define SDDS_DBLARRAY_H_
namespace sdds {
   class DblArray {
      double* m_data{}; // init double* m_data = nullptr;
      int m_size;
   public:
      DblArray(int size = 1);
      DblArray(const DblArray& cp);
      DblArray& operator=(const DblArray& cpAsgn);
      double& element(int indexOfelement);
      double& operator[](int indexOfElement);
      ~DblArray();
      int size()const;
   };
}


#endif // !SDDS_DBLARRAY_H_


