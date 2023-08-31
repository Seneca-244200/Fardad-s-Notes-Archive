#include <iostream>
#include <string>
using namespace std;

#include "Utils.h"
namespace sdds {
   Utils ut;
   char* Utils::strcat(char* des, const char* src)const {
      int len = strlen(des);
      int i = 0;
      while (src[i]) {
         des[i + len] = src[i];
         i++;
      }
      des[i + len] = char(0);
      return des;
   }
   int Utils::getint(const char* prompt, istream& istr)const {
      int num;
      if (prompt) cout << prompt;
      istr >> num;
      istr.ignore(1000, '\n');
      return num;
   }
   // raplicating the cin.get() funciton
   istream& Utils::getint(int& num, const char* prompt, istream& istr)const {
      num = getint(prompt, istr);
      return istr;
   }
   void Utils::reAloCpy( char*& des, const char* src ) {
      delete[] des;
      aloCpy( des, src );
   }
   void Utils::aloCpy( char*& des, const char* src ) {
      des = nullptr;
      if ( src ) {
         des = new char[ut.strlen( src ) + 1];
         ut.strcpy( des, src );
      }
   }
   char* Utils::getDynStr( std::istream& istr ) {
      char* cstr{};
      string S;
      if ( getline( istr, S ) ) {
         aloCpy( cstr, S.c_str( ) );
      }
      return cstr;
   }

   char Utils::tolower(char ch)const {
      if (ch >= 'A' && ch <= 'Z') ch += ('a' - 'A');
      return ch;
   }
   int Utils::strcmp(const char* s1, const char* s2)const {
      int i;
      for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
      return s1[i] - s2[i];
   }
   int Utils::strcmp(const char* s1, const char* s2, int len)const {
      int i = 0;
      while (i < len - 1 && s1[i] && s2[i] && s1[i] == s2[i]) {
         i++;
      }
      return s1[i] - s2[i];
   }
   char* Utils::strcpy(char* des, const char* src)const {
      int i;
      for (i = 0; src[i]; i++) des[i] = src[i];
      des[i] = char(0);
      return des;
   }
   char* Utils::strcpy(char* des, const char* src, int len)const {
      int i;
      for (i = 0; i< len && src[i]; i++) des[i] = src[i];
      des[i] = 0; // unlike strncpy, this function null terminates
      return des;
   }
   char* Utils::strncpy(char* des, const char* src, int len)const {
      int i = 0;
      while (i < len - 1 && src[i]) {
         des[i] = src[i];
         i++;
      }
      des[i] = src[i];
      return des;
   }
   int Utils::strlen(const char* str)const {
      int len;
      for (len = 0; str[len]; len++);
      return len;
   }
   const char* Utils::strstr(const char* str, const char* find)const {
      const char* faddress = nullptr;
      int i, flen = strlen(find), slen = strlen(str);
      for (i = 0; i <= slen - flen && strcmp(&str[i], find, flen); i++);
      if (i <= slen - flen) faddress = &str[i];
      return faddress;
   }
   int Utils::isalpha(char ch)const {
      return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
   }

   int Utils::isspace(char ch)const {
      return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r';
   }

   void Utils::trim(char word[])const {
      int i;
      while (word[0] && !isalpha(word[0])) {
         strcpy(word, word + 1);
      }
      i = strlen(word);
      while (i && !isalpha(word[i - 1])) {
         word[i-- - 1] = char(0);
      }
   }
   char* Utils::lowerstrcpy(char des[], const char source[])const {
      int i = 0, j = 0;
      for (; source[i] != 0; i++) {
         des[j++] = tolower(source[i]);
      }
      des[j] = char(0);
      return des;
   }
   void Utils::read(char* cString, unsigned int maxSize, char delimiter)const {
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