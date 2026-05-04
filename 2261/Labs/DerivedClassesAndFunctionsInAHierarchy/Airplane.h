#ifndef SENECA_AIRPLANE_H
#define SENECA_AIRPLANE_H

#include "Vehicle.h"
#include <iostream>

namespace seneca {

   class Airplane : public Vehicle {
      int m_altitude;
   public:
      Airplane();
      Airplane(const char* plate, int speed, int altitude);

      void setAltitude(int altitude);
      int altitude() const;
      void climb(int value);

      void move() const;
      void display(std::ostream& os) const;
   };

}

#endif