class Bicycle {
   float wheelsize_;
public:
   Bicycle(float wheelsize_);
};
class Engine {
   int displacement_;
public:
   Engine(int displacement);
};

// answer: 
class MotorCycle :public Bicycle {
   Engine e_;
public:
   MotorCycle(float ws, int disp) :Bicycle(ws), e_(disp) {}
};