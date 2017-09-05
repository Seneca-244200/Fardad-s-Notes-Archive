#include <iostream>
using namespace std;
class Bicycle {
   int m_size;  // wheel size
   int m_speed;
public:
   Bicycle(int size):m_speed(0), m_size(size) {}
   void size(int value) {
      m_size = value;
   }
   int speed()const {
      return m_speed;
   }
   Bicycle& accelerate(int speed = 2) {
      if ((m_speed + speed) <= 60) {
         m_speed += speed;
      }
      return *this;
   }
   Bicycle& brake() {
      if (m_speed > 0) {
         m_speed -= 5;
         if (m_speed < 0) m_speed = 0;
      }
      return *this;
   }
   ostream& showSpeed(ostream& ostr = cout)const {
      return ostr << "Bicycle with "<< m_size 
             <<" inches wheels is going with the m_speed of " 
             << m_speed << " km/h";
   }
};

ostream& operator<<(ostream& ostr,const Bicycle& B) {
   return B.showSpeed(ostr);
}

class Engine {
   int m_size;  // engine capacity in cc 
public:
   Engine(int size) {
      m_size = size;
   }
   void size(int value) {
      m_size = value;
   }
};

class Motorcycle : public Bicycle {
   Engine m_engine;
public:
   Motorcycle(int wheelSize, int Enginesize);
};

Motorcycle::Motorcycle(int wheelSize, int Enginesize):
             Bicycle(wheelSize), m_engine(Enginesize) {
}


int operator+(const Bicycle& X, int speed) {
   return X.speed() + speed;
}

int& operator+=(int& LO, const Bicycle& B) {
   LO += B.speed();
   return LO;
}

int main() {
   Bicycle B(18);
   B.accelerate(20);
   int newspeed;
   int copyOfspeed;
   newspeed = B + 30;
   cout << "the new speed would be: " << newspeed << endl;
   copyOfspeed =  newspeed += B;
   return 0;
}