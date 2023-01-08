#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds {
   void flushKey();
   void readDynCstr(char*& ret, const char* prompt = nullptr);
   char* readDynCstr(const char* prompt = nullptr);
}
#endif // !SDDS_UTILS_H
