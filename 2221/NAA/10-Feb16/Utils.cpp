#include <iostream>
using namespace std;
#include "Utils.h"
namespace sdds {
   int getint(const char* prompt, istream& istr) {
      int num;
      if (prompt) cout << prompt;
      istr >> num;
      istr.ignore(1000, '\n');
      return num;
   }
   // raplicating the cin.get() funciton
   istream& getint(int& num, const char* prompt, istream& istr) {
      num = getint(prompt, istr);
      return istr;
   }
   char toLower(char ch) {
      if (ch >= 'A' && ch <= 'Z') ch += ('a' - 'A');
      return ch;
   }
   int strCmp(const char* s1, const char* s2) {
      int i;
      for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
      return s1[i] - s2[i];
   }
   int strnCmp(const char* s1, const char* s2, int len) {
      int i = 0;
      while (i < len - 1 && s1[i] && s2[i] && s1[i] == s2[i]) {
         i++;
      }
      return s1[i] - s2[i];
   }
   void strCpy(char* des, const char* src) {
      int i;
      for (i = 0; src[i]; i++) des[i] = src[i];
      des[i] = 0;
   }
   int strLen(const char* str) {
      int len;
      for (len = 0; str[len]; len++);
      return len;
   }
   const char* strStr(const char* str, const char* find) {
      const char* faddress = nullptr;
      int i, flen = strLen(find), slen = strLen(str);
      for (i = 0; i <= slen - flen && strnCmp(&str[i], find, flen); i++);
      if (i <= slen - flen) faddress = &str[i];
      return faddress;
   }
   int isAlpha(char ch) {
      return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
   }

   int isSpace(char ch) {
      return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r';
   }

   void trim(char word[]) {
      int i;
      while (word[0] && !isAlpha(word[0])) {
         strCpy(word, word + 1);
      }
      i = strLen(word);
      while (i && !isAlpha(word[i - 1])) {
         word[i-- - 1] = 0;
      }
   }
   void toLowerCaseAndCopy(char des[], const char source[]) {
      int i = 0, j = 0;
      for (; source[i] != 0; i++) {
         des[j++] = toLower(source[i]);
      }
      des[j] = 0;
   }
   void read(char* cString, unsigned int maxSize, char delimiter) {
      char ch = 0;
      unsigned int i = 0;
      do {    // skipping leading white space chars
         std::cin.get(ch);
      } while (isSpace(ch));
      // read char by char util hitting delimiter or maxSize
      for (i = 0; i < maxSize && ch != delimiter; i++) {
         cString[i] = ch;
         if (i < maxSize - 1) std::cin.get(ch);
      }
      cString[i] = 0;
   }

}