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
   int operator+(int speedValue)const {
      int ret = speed() + speedValue;
      return ret;
   }  
   int operator+=(int speedValue) {
      m_speed += speedValue;
      if (m_speed > 60) m_speed = 60;
      return m_speed;
   }
   int operator=(int speedValue) {
      m_speed = speedValue;
      if (m_speed > 60) m_speed = 60;
      return m_speed;
   }
   Bicycle& operator=(const Bicycle& B) {
      m_speed = B.m_speed;
      return *this;
   }
   Bicycle& operator++() {
      operator=(speed() + 1);
      return *this;
   }
   Bicycle operator++(int) {
      Bicycle local = *this;
      operator=(speed() + 1);
      return local;
   }
};

//int operator+(const Bicycle& B, int speed) {
//   return B.speed() + speed;
//}
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
   B += 10;
   B = 100;
   cout << C << endl;
   B = C;
   ++B;
   cout << B << endl;
   cout << ++B << endl;
   cout << B++ << endl;
   cout << B << endl;
   return 0;
}