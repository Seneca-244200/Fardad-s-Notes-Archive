#ifndef  SDDS_UTILS_H_
#define  SDDS_UTILS_H_
namespace sdds {
   int read(int& number,
      const char* prompt = nullptr,
      const char* errMes = nullptr);
   double read(double& number,
      const char* prompt = nullptr,
      const char* errMes = nullptr);

   int read(int& number,int min, int max,
      const char* prompt = nullptr,
      const char* errMes = nullptr);

}
#endif