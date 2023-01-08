#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
using namespace std;
#include "Utils.h"
namespace sdds {
   void flushKey() {
      while (getchar() != '\n');
   }
   void readDynCstr(char*& ret, const char* prompt ) {
      char temp[201]{};
      if (prompt) {
         printf(prompt);
      }
      scanf("%[^\n]", temp);
      ret = new char[strlen(temp) + 1];
      strcpy(ret, temp);
      flushKey();
   }
   char* readDynCstr(const char* prompt ) {
      char temp[201]{};
      char* ret{};
      if (prompt) {
         printf(prompt);
      }
      scanf("%[^\n]", temp);
      ret = new char[strlen(temp) + 1];
      strcpy(ret, temp);
      flushKey();
      return ret;
   }
}