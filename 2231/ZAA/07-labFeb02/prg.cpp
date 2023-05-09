class Car {
   char m_model[21];
public:
   Car(const char* model = "");

};

class Parking {
   Car* m_parkedCars;
   int m_noOfParkedCars;
public:
   Parking() {
      m_parkedCars = nullptr;
      m_noOfParkedCars = 0;
   }
   void park(Car& car) {
      Car* temp = new Car[m_noOfParkedCars + 1];
      for (int i = 0; i < m_noOfParkedCars; i++) {
         temp[i] = m_parkedCars[i];
      }
      delete[] m_parkedCars;
      m_parkedCars = temp;
      m_parkedCars[m_noOfParkedCars++] = car;
   }
   ~Parking() {
      delete[] m_parkedCars;
   }
};