#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
// using namespace std; not allowed in a header file
namespace sdds {
   class Utils {
      bool m_debug{};
   public:
      Utils();
      void debug(bool value);
      bool debug()const;
      char* alcpy(const char* cstr);
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
      int getint(const char* prompt = nullptr)const;
      int getint(int min, int max, const char* prompt = nullptr)const;
      std::istream& getint(int& num, int min, int max, const char* prompt = nullptr)const;
      int getint(std::istream& istr, char delim = '\n')const;
      std::istream& getint(int& num, const char* prompt = nullptr)const;
      std::istream& getint(int& num, std::istream& istr, char delim = '\n')const;
      char* getDynCstr(std::istream& istr = std::cin, char delim='\n');
   };
   extern Utils ut;
   
}

#endif // !SDDS_UTILS_H
