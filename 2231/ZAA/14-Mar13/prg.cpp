#include <iostream>
using namespace std;
class Bicycle {
   int m_speed{};
   int m_maxSpeed{};
protected:
   void setSpeed(int speed) {
      m_speed = speed;
      if(m_speed > m_maxSpeed) m_speed = m_maxSpeed;
      if(m_speed < 0) m_speed = 0;
   }
public:
   Bicycle(int maxSpeed = 50) {
      m_maxSpeed = maxSpeed;
   }
   void pedal() {
      setSpeed(m_speed + 5);
   }
   void brake() {
      setSpeed(m_speed - 5);
   }
   ostream& status(ostream& ostr = cout)const {
      cout << "going " << m_speed << "km out of max speed of " << m_maxSpeed;
   }
};
ostream& operator<<(ostream& ostr, const Bicycle& b) {
   return b.status(ostr);
}

class Engine {
   int m_power{};
   int m_maxPower{};
public:
   Engine(int maxPower) :m_maxPower{ maxPower } {
   }
   void incThrottle() {
      if(m_power < m_maxPower) {
         m_power += (m_maxPower / 10);
         if(m_power > m_maxPower) m_power = m_maxPower;
      }
   }
   void decThrottle() {
      if(m_power < m_maxPower) {
         m_power += (m_maxPower / 10);
         if(m_power > m_maxPower) m_power = m_maxPower;
      }
   }
   int currentPower()const {
      return m_power;
   }
   int power()const {
      return m_maxPower;
   }
};

class MotorCycle : public Bicycle {
   Engine m_engine;

public:

};