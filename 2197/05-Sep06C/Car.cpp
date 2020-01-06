#include "Car.h"
#include <cstring>
using namespace std;
namespace sdds {
   void Car::set(const char* the_make, const char* the_model,
      const char* the_license_plate) {
      strncpy(m_make, the_make, 30);
      m_make[30] = 0;
   }
}