#include <iostream>
using namespace std;
class Vehicle {
protected:
   int m_speed;
public:
   Vehicle(int speed = 0) :m_speed(speed) {}
   virtual ostream& showSpeed(ostream& ostr = cout)const = 0;
};
ostream& operator<<(ostream& ostr, const Vehicle& V) {
   return V.showSpeed(ostr);
}

class Bicycle: public Vehicle {
   int m_size;  // wheel size
public:
   Bicycle(int size) :m_size(size) {
   }
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
   Bicycle& brake(int speed = -1) {
      if (speed == -1) {
         m_speed = 0;
      }
      else if (m_speed > 0) {
         m_speed -= speed;
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
      return ostr << "Bicycle with " << m_size
         << " inches wheels is going with the m_speed of "
         << m_speed << " km/h";
   }

};



class Engine {
   int m_size;  // engine capacity in cc 
public:
   Engine(int size) {
      m_size = size;
   }
   void size(int value) {
      m_size = value;
   }
   int size()const {
      return m_size;
   }
};

class Motorcycle : public Bicycle {
   Engine m_engine;
public:
   Motorcycle(int wheelSize, int Enginesize);
   Bicycle& accelerate(int speed = 10) {
      if ((m_speed + speed) <= 160) {
         m_speed += speed;
      }
      return *this;
   }
   ostream& showSpeed(ostream& ostr = cout)const {
      return ostr << "Motocycle with " << m_engine.size()
         << "cc engineis going with the speed of "
         << m_speed << " km/h";
   }
};

Motorcycle::Motorcycle(int wheelSize, int Enginesize) :Bicycle(wheelSize), m_engine(Enginesize) {
}


int& operator+=(int& LO, const Bicycle& B) {
   LO += B.speed();
   return LO;
}


int main() {
   // Vehicle V;  cannot because Vehicle is abstract;
   Bicycle B(18);
   Motorcycle M(10, 250);
   int futureSpeed;
   int sumOfSpeed(0);
   int speed;
   M.accelerate(30);
   cout << M << endl;
   cout << M << endl;
   B.accelerate(60);
   cout << M << endl;
   B.brake(3);
   cout << M << endl;
   futureSpeed = M + 10;
   Vehicle* p = new Motorcycle(10, 700);
   p->showSpeed();
   cout << B << endl;
   return 0;
}