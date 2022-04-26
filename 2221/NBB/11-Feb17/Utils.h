#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds {
   char toLower(char ch); 
   char* strCat(char* des, const char* src);
   int strCmp(const char* s1, const char* s2);
   int strnCmp(const char* s1, const char* s2, int len);
   char* strCpy(char* des, const char* src);
   int strLen(const char* str);
   const char* strStr(const char* str, const char* find);
   int isAlpha(char ch);
   int isSpace(char ch);
   void trim(char word[]);
   void toLowerCaseAndCopy(char des[], const char source[]);
   void read(char* cString, unsigned int maxSize, char delimiter='\n');
   int getint(const char* prompt = nullptr);
}

#endif // !SDDS_UTILS_H
