#include "Vehicle.h"

using namespace std;

namespace seneca {

   void copyStr(char* dest, const char* src, int maxLen) {
      int i = 0;
      if (src) {
         while (src[i] && i < maxLen - 1) {
            dest[i] = src[i];
            i++;
         }
      }
      dest[i] = '\0';
   }

   Vehicle::Vehicle() {
      copyStr(m_plate, "NO-PLATE", 9);
      m_speed = 0;
   }

   Vehicle::Vehicle(const char* plate, int speed) {
      setPlate(plate);
      setSpeed(speed);
   }

   void Vehicle::setPlate(const char* plate) {
      if (plate && plate[0]) {
         copyStr(m_plate, plate, 9);
      }
      else {
         copyStr(m_plate, "NO-PLATE", 9);
      }
   }

   void Vehicle::setSpeed(int speed) {
      if (speed < 0) {
         m_speed = 0;
      }
      else {
         m_speed = speed;
      }
   }

   const char* Vehicle::plate() const {
      return m_plate;
   }

   int Vehicle::speed() const {
      return m_speed;
   }

   void Vehicle::accelerate(int value) {
      m_speed += value;
      if (m_speed < 0) {
         m_speed = 0;
      }
   }

   void Vehicle::move() const {
      cout << "Vehicle " << m_plate << " is moving on the ground." << endl;
   }

   void Vehicle::display(std::ostream& os) const {
      os << "Vehicle | Plate: " << m_plate << " | Speed: " << m_speed;
   }

}