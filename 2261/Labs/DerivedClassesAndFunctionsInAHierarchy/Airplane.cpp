#include "Airplane.h"

using namespace std;

namespace seneca {

   Airplane::Airplane() : Vehicle() {
      m_altitude = 0;
   }

   Airplane::Airplane(const char* plate, int speed, int altitude)
      : Vehicle(plate, speed) {
      setAltitude(altitude);
   }

   void Airplane::setAltitude(int altitude) {
      if (altitude < 0) {
         m_altitude = 0;
      }
      else {
         m_altitude = altitude;
      }
   }

   int Airplane::altitude() const {
      return m_altitude;
   }

   void Airplane::climb(int value) {
      m_altitude += value;
      if (m_altitude < 0) {
         m_altitude = 0;
      }
   }

   void Airplane::move() const {
      cout << "Airplane " << plate() << " is flying at " << m_altitude << " feet." << endl;
   }

   void Airplane::display(std::ostream& os) const {
      Vehicle::display(os);
      os << " | Altitude: " << m_altitude;
   }

}