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

class Bicycle : public Vehicle {
   char* m_serNo;
   int m_size;  // wheel size
public:
   Bicycle(int size = 18, const char* sno = "no serial") :m_size(size) {
      m_serNo = new char[strlen(sno) + 1];
      strcpy(m_serNo, sno);
   }
   Bicycle(const Bicycle& B) {
      m_serNo = new char[strlen(B.m_serNo) + 1];
      strcpy(m_serNo, B.m_serNo);
      m_size = B.m_size;
   }
   virtual ~Bicycle() {
      delete[] m_serNo;
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
   char* m_plate;
public:
   Motorcycle(int wheelSize, int Enginesize, const char* plate);
   Motorcycle(const Motorcycle& M):Bicycle(M) {
      m_plate = new char[strlen(M.m_plate) + 1];
      strcpy(m_plate, M.m_plate);
   }
   ~Motorcycle() {
      delete[] m_plate;
   }
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

Motorcycle::Motorcycle(int wheelSize, int Enginesize, const char* plate) :Bicycle(wheelSize), m_engine(Enginesize) {
   m_plate = new char[strlen(plate) + 1];
   strcpy(m_plate, plate);
}


int& operator+=(int& LO, const Bicycle& B) {
   LO += B.speed();
   return LO;
}


int main() {
   // Vehicle V;  cannot because Vehicle is abstract;
   Bicycle* p = new Motorcycle(10, 250, "Hello");
   //....
   delete[] p;
   return 0;
}