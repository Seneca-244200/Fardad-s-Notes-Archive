class Bicycle {
   int m_size;  // wheel size
public:
   Bicycle(int size = -1) {
      m_size = size;
   }
   void size(int value) {
      m_size = value;
   }

};
class Engine {
   int m_size;  // engine capacity in cc 
public:
   Engine(int size = -1) {
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
Motorcycle::Motorcycle(int wheelSize, int Enginesize) {
   Bicycle::size(wheelSize);
   m_engine.size(Enginesize);
}
int main() {
   Motorcycle M(12, 500);

}