#ifndef SENECA_VEHICLE_H
#define SENECA_VEHICLE_H

#include <iostream>

namespace seneca {

   class Vehicle {
      char m_plate[9];
      int m_speed;
   public:
      Vehicle();
      Vehicle(const char* plate, int speed);

      void setPlate(const char* plate);
      void setSpeed(int speed);

      const char* plate() const;
      int speed() const;

      void accelerate(int value);
      void move() const;
      void display(std::ostream& os) const;
   };

}

#endif