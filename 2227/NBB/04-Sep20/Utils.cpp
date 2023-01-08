#include <cstdio>
#include <cstring>
#include "Utils.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace sdds;
namespace sdds {
   void flushKey() {
      while (getchar() != '\n');
   }
   char* readDynCstr(const char* prompt) {
      char str[301];
      char* ret = nullptr;
      if (prompt) printf(prompt);
      if (scanf("%300[^\n]", str) == 1) {
         ret = new char[strlen(str) + 1];
         strcpy(ret, str);
      }
      flushKey();
      return nullptr;
   }

}