#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
// using namespace std; not allowed in a header file
namespace sdds {
   class Utils {
   public:
      char tolower(char ch)const;
      char* strcat(char* des, const char* src)const;
      int strcmp(const char* s1, const char* s2)const;

      /// <summary>
      /// Compares two C style string (null terminated char arrays)
      /// </summary>
      /// <param name="s1">string to compare</param>
      /// <param name="s2">string to compare</param>
      /// <param name="len">compare up to this many characters</param>
      /// <returns>less than 0 if s1 &lt; s2,greater than 0 if s1 &gt; s2, and zero if identical </returns>
      int strcmp(const char* s1, const char* s2, int len)const;

      char* strcpy(char* des, const char* src)const;

      /// <summary>
      /// copies src to des and nulltemrinates the des
      /// </summary>
      /// <param name="des">cString to copy to</param>
      /// <param name="src">cString to copy from</param>
      /// <param name="len">Max number of chars to copy</param>
      /// <returns>the address of the des</returns>
      char* strcpy(char* des, const char* src, int len)const;
      char* strncpy(char* des, const char* src, int len)const;
      int strlen(const char* str)const;
      const char* strstr(const char* str, const char* find)const;
      int isalpha(char ch)const;
      int isspace(char ch)const;
      void trim(char word[])const;
      char* lowerstrcpy(char des[], const char source[])const;
      void read(char* cString, unsigned int maxSize, char delimiter = '\n')const;
      int getint(const char* prompt = nullptr, std::istream& istr = std::cin)const;
      std::istream& getint(int& num, const char* prompt = nullptr, std::istream& istr = std::cin)const;
   };
   extern Utils ut;

}

#endif // !SDDS_UTILS_H
