#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Car.h"
namespace ict{
  void Car::set(const char* plate, const char* makeModel){
    std::strncpy(m_plate, plate, 8);
    m_plate[8] = 0;
    std::strncpy(m_makeModel, makeModel, 40);
    m_makeModel[40] = 0;;
  }
  Car::Car(const char* plate, const char* makeModel){
    set(plate, makeModel);
  }
  std::ostream& Car::display(std::ostream& os)const{
    return os << m_plate << " " << m_makeModel;
  }
  bool Car::operator<=(const Car& C)const{
    return std::strcmp(m_plate, C.m_plate) <= 0;
  }
  bool Car::operator>=(const Car& C)const{
    return std::strcmp(m_plate, C.m_plate) >= 0;
  }
  Car::operator const char*()const{
    return m_plate;
  }
}
