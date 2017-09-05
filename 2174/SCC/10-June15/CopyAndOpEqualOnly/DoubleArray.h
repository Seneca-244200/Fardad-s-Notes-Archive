#pragma once

namespace sict {

   class DoubleArray {
      double* m_data;
      int m_size;
   public:
      DoubleArray(int size);
      DoubleArray(const DoubleArray& D);
      double& element(int index);
      double& operator[](int index);
      DoubleArray& operator=(const DoubleArray& D);
      int size()const;
      ~DoubleArray();
   };

} 