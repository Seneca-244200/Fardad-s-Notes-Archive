class Bicycle {
   int m_speed;
public:
   Bicycle(int speed);
};

class Engine {
   double m_power;
public:
   Engine(double power);
};


class Motorcycle :public Bicycle {
   Engine m_engine;
public:
   Motorcycle(double power, int speed):Bicycle(speed), m_engine(power) {

   }
};


