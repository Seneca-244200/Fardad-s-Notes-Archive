class Bicycle {
   float wheelsize_;
public:
   Bicycle(float wheelsize_);

   ....

};


class Engine {
   int displacement_;
public:
   Engine(int displacement);

   ...

};
class Motorcycle : public Bicycle {
   Engine eng_;
public:
   Motorcycle(float ws, int disp) :Bicycle(ws), eng_(disp) {}
};



