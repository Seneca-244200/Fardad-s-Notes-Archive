#include <iostream>
using namespace std;
#include "Utils.h"
namespace sdds {
   
   char* strcat(char* des, const char* src) {
      int len = strlen(des);
      int i = 0;
      while (src[i]) {
         des[i + len] = src[i];
         i++;
      }
      des[i + len] = char(0);
      return des;
   }
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
   char tolower(char ch) {
      if (ch >= 'A' && ch <= 'Z') ch += ('a' - 'A');
      return ch;
   }
   int strcmp(const char* s1, const char* s2) {
      int i;
      for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
      return s1[i] - s2[i];
   }
   int strcmp(const char* s1, const char* s2, int len) {
      int i = 0;
      while (i < len - 1 && s1[i] && s2[i] && s1[i] == s2[i]) {
         i++;
      }
      return s1[i] - s2[i];
   }
   char* strcpy(char* des, const char* src) {
      int i;
      for (i = 0; src[i]; i++) des[i] = src[i];
      des[i] = char(0);
      return des;
   }
   char* strcpy(char* des, const char* src, int len) {
      int i;
      for (i = 0; i< len && src[i]; i++) des[i] = src[i];
      des[i] = 0; // unlike strncpy, this function null terminates
      return des;
   }
   char* strncpy(char* des, const char* src, int len) {
      int i = 0;
      while (i < len - 1 && src[i]) {
         des[i] = src[i];
         i++;
      }
      des[i] = src[i];
      return des;
   }
   int strlen(const char* str) {
      int len;
      for (len = 0; str[len]; len++);
      return len;
   }
   const char* strstr(const char* str, const char* find) {
      const char* faddress = nullptr;
      int i, flen = strlen(find), slen = strlen(str);
      for (i = 0; i <= slen - flen && strcmp(&str[i], find, flen); i++);
      if (i <= slen - flen) faddress = &str[i];
      return faddress;
   }
   int isalpha(char ch) {
      return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
   }

   int isspace(char ch) {
      return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r';
   }

   void trim(char word[]) {
      int i;
      while (word[0] && !isalpha(word[0])) {
         strcpy(word, word + 1);
      }
      i = strlen(word);
      while (i && !isalpha(word[i - 1])) {
         word[i-- - 1] = char(0);
      }
   }
   char* lowerstrcpy(char des[], const char source[]) {
      int i = 0, j = 0;
      for (; source[i] != 0; i++) {
         des[j++] = tolower(source[i]);
      }
      des[j] = char(0);
      return des;
   }
   void read(char* cString, unsigned int maxSize, char delimiter) {
      char ch = 0;
      unsigned int i = 0;
      do {    // skipping leading white space chars
         std::cin.get(ch);
      } while (isspace(ch));
      // read char by char util hitting delimiter or maxSize
      for (i = 0; i < maxSize && ch != delimiter; i++) {
         cString[i] = ch;
         if (i < maxSize - 1) std::cin.get(ch);
      }
      cString[i] = char(0);
   }
}