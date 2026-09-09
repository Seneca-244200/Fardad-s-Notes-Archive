#ifndef SENECA_BUCKET_H
#define SENECA_BUCKET_H
#include <iostream>
namespace seneca {
   class Bucket {
      double m_value{};
      double m_capacity{ 10.00 };
      double junk{};
   public:
      Bucket() = default;
      Bucket(double value, double capacity = 15);
      /// <summary>
      /// displays the Bucket
      /// </summary>
      /// <returns>ostream reference</returns>
      std::ostream& operator~()const;
      // operator overaload are always created using their function form.
      Bucket& operator=(const double& value);
      double operator+=(double value);
      Bucket operator+(double value)const;
      Bucket& operator++();
      // the int is NOT and argument, it is flag to idicates
      // this is a post fix operator
      Bucket operator++(int);
      // type conversion overload 
      // type cast overload
      operator double()const;
      double operator[](int index) const;
      double& operator[](int index);
   //   friend std::ostream& operator<<(std::ostream& leftOp, const Bucket& righOp);
   // do not do this, instead create a method to display
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   double operator+=(double& leftOperand, const Bucket& rightOperand);
   std::ostream& operator<<(std::ostream& leftOp, const Bucket& righOp);
   std::istream& operator>>(std::istream& leftOp, Bucket& righOp);
}
#endif // !SENECA_BUCKET_H
