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
   Bicycle& accelerate() {
      if (m_speed < 60) {
         m_speed += 2;
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

Motorcycle::Motorcycle(int wheelSize, int Enginesize):Bicycle(wheelSize), m_engine(Enginesize) {
}

int operator+(const Bicycle& B, int speed) {
   return B.speed() + speed;
}
int& operator+=(int& LO, const Bicycle& B) {
   LO += B.speed();
   return LO;
}
int main() {
   Bicycle B(18);
   Bicycle C(18);
   C.accelerate().accelerate().accelerate().accelerate();
   int futureSpeed;
   int sumOfSpeed = 0;
   int speed;
   cout << B << endl;
   B.accelerate();
   B.accelerate();
   B.accelerate();
   cout << B << endl;
   B.brake();
   cout << B << endl;
   futureSpeed = B + 10;
   cout << "If I got 10 km faster it would be " << futureSpeed << endl;
   speed = sumOfSpeed += B;
   sumOfSpeed += C;
   cout << "The sum of speed is " << sumOfSpeed << endl;
   return 0;
}