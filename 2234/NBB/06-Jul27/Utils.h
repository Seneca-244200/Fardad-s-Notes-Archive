#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
#include <string>
// using namespace std; not allowed in a header file
#define SDDS_DEBUG
namespace sdds {
   class Utils {
   public:
      char tolower(char ch)const;
      char* strcat(char* des, const char* src)const;
      int strcmp(const char* s1, const char* s2)const;
      int strcmp(const char* s1, const char* s2, int len)const;
      char* strcpy(char* des, const char* src)const;
      char* strcpy(char* des, const char* src, int len)const;
      char* strncpy(char* des, const char* src, int len)const;
      int strlen(const char* str)const;
      const char* strstr(const char* str, const char* find)const;
      int isalpha(char ch)const;
      int isspace(char ch)const;
      void trim(char word[])const;
      char* lowerstrcpy(char des[], const char source[])const;
      void read(char* cString, unsigned int maxSize, char delimiter = '\n')const;
      char* read( std::istream& istr = std::cin , char delim = '\n' );
      int getint(const char* prompt = nullptr, std::istream& istr = std::cin)const;
      std::istream& getint(int& num, const char* prompt = nullptr, std::istream& istr = std::cin)const;
      void reStrAloCpy( char*& des, const char* src );
      void strAloCpy( char*& des, const char* src );
   };
   extern Utils ut;

}

#endif // !SDDS_UTILS_H
