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
   Bicycle& operator=(int newspeed) {
      if (newspeed <= 60) {
         m_speed += newspeed;
      }
      return *this;
   }
   Bicycle operator+(const Bicycle& RO)const {
      Bicycle res(this->m_size);
      return res = this->speed() + RO.speed();
   }

   int operator+(int speed)const { //const: the left operand (that is "*this") read only
      return this->speed() + speed;
   }
   Bicycle& operator++() {
      if (m_speed + 1 <= 60) {
         m_speed++;
      }
      return *this;
   }
   Bicycle operator++(int) {
      Bicycle temp = *this;
      if (m_speed + 1 <= 60) {
         m_speed++;
      }
      return temp;
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


int& operator+=(int& LO, const Bicycle& B) {
   LO += B.speed();
   return LO;
}


int main() {
   Bicycle B(18);
   Bicycle C(18);
   Bicycle D(18);
   C.accelerate(20);
   int futureSpeed;
   int sumOfSpeed = 0;
   int speed;
   cout << B << endl;
   B.accelerate(6);
   cout << B << endl;
   B.brake();
   cout << B << endl;
   futureSpeed = B + 10;
   D = B + C;
   D = ++B;
   C = B++;
   return 0;
}