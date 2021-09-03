#ifndef SDDS_MYIO_H
#define SDDS_MYIO_H
namespace sdds {
   class MyOutput {
      int m_width = 1;
      int m_precision = 3;
   public:
      MyOutput& width(int value);
      MyOutput& precision(int value);
      MyOutput& operator<<(const char* str);
      MyOutput& operator<<(int value);
      MyOutput& operator<<(double value);
   };
   class MyInput {
   public:
      MyInput& operator>>(char* str);
      MyInput& operator>>(int& value);
      MyInput& operator>>(double& value);
   };
   extern MyInput min;   // prototype for to make a file scope object global to all those who include myIO.h
   extern MyOutput mout;
}
#endif
