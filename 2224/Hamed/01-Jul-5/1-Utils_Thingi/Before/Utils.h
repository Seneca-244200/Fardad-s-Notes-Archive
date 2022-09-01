#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
// using namespace std; not allowed in a header file
namespace sdds {
   
  
      char tolower(char ch);
      char* strcat(char* des, const char* src);
      int strcmp(const char* s1, const char* s2);
      int strcmp(const char* s1, const char* s2, int len);
      char* strcpy(char* des, const char* src);
      char* strcpy(char* des, const char* src, int len);
      char* strncpy(char* des, const char* src, int len);
      int strlen(const char* str);
      const char* strstr(const char* str, const char* find);
      int isalpha(char ch);
      int isspace(char ch);
      void trim(char word[]);
      char* lowerstrcpy(char des[], const char source[]);
      void read(char* cString, unsigned int maxSize, char delimiter = '\n');
      int getint(const char* prompt = nullptr, std::istream& istr = std::cin);
      std::istream& getint(int& num, const char* prompt = nullptr, std::istream& istr = std::cin);
   
 

}

#endif // !SDDS_UTILS_H
