#ifndef SDDS_MYIO_H
#define SDDS_MYIO_H
namespace sdds {
   class MyOutput {
      int m_width = 1;
   public:
      MyOutput& width(int);
      MyOutput& operator<<(const char* str);
      MyOutput& operator<<(int val);
      MyOutput& operator<<(double val);
   };
   class MyInput {
   public:
      MyInput& operator>>(char* str);
      MyInput& operator>>(int& val);
      MyInput& operator>>(double& val);
   };
   extern MyOutput mout;
   extern MyInput min;
}
#endif
