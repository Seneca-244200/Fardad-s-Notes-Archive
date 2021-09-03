#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "MyIO.h"
using namespace std;
namespace sdds {
   MyOutput mout;
   MyInput min;

   MyOutput& MyOutput::operator<<(const char* str) {
      printf(str);
      return *this;
   }
   MyOutput& MyOutput::operator<<(int val) {
      printf("%d", val);
      return *this;
   }
   MyOutput& MyOutput::operator<<(double val) {
      printf("%.2lf", val);
      return *this;
   }


   MyInput& MyInput::operator>>(char* str) {
      scanf("%s", str);
      return *this;
   }
   MyInput& MyInput::operator>>(int& val) {
      scanf("%d", &val);
      return *this;
   }
   MyInput& MyInput::operator>>(double& val) {
      scanf("%lf", &val);
      return *this;
   }

}