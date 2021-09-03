#ifndef  SDDS_UTILS_H_
#define  SDDS_UTILS_H_
namespace sdds {
   int& get(int& val, const char* prompt = nullptr);
   double& get(double& val, const char* prompt = nullptr);
}
#endif