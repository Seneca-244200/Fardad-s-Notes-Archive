#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "utils.h"
#include "Time.h"
using namespace std;
namespace sdds {
   int strlen(const char* str) {
      int len = 0;
      while (str[len])len++;
      return len;
   }
   char* strcpy(char* des, const char* src) {
      int i=0;
      while (src[i]) {
         des[i] = src[i];
         i++;
      }
      des[i] = 0;
      return des;
   }

}