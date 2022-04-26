#include <iostream>
class Polygon {
   int num;
protected:
   void setnum(const int n) {
      num = n;
   }
public:
   Polygon() {
      num = 0;
   }
   Polygon(int n) {
      std::cout << "Polygon:" << n << std::endl;
      num = n;
   }
   Polygon(const Polygon& src) {
      num = src.num + 2;
      std::cout << "cc1:" << num << std::endl;
   }
   Polygon& operator=(const Polygon& src) {
      num = src.num - 2;
      std::cout << "=1:" << num << std::endl;
      return *this;
   }
   virtual ~Polygon() {
      std::cout << "~Polygon:" << num << std::endl;
   }
   virtual void go()const {
      std::cout << "Top:" << num << std::endl;
   }
};
class Square : public Polygon {
   int num;
protected:
   int getnum() const {
      return num;
   }
public:
   Square(int n) :Polygon(n / 2) {
      std::cout << "Square:" << n << std::endl;
      num = n;
   }
   virtual ~Square() {
      std::cout << "~Square:" << num << std::endl;
   }
   void go()const {
      std::cout << "bottom:" << num << std::endl;
   }
};
void execute(Polygon& p) {
   p.go();
}

void stop(Polygon p) {
   p.go();
}
int main() {
   Square sq(25);
   std::cout << "--------------" << std::endl;
   execute(sq);
   stop(sq);
   std::cout << "--------------" << std::endl;
}
