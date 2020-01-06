
class Bottle {
   char* m_name;
   double m_contentValue;
   double m_capacity;
public:
   Bottle() {
      m_name = nullptr;
      m_contentValue = 0;
      m_capacity = 250;
   }
   Bottle(const char* contentType,
      double contentValue,
      double capacity = 250) {
      if (contentValue > capacity)
         contentValue = capacity;
      m_contentValue = contentValue;
      m_capacity = capacity;
      m_name = new char[strlen(contentType) + 1];
      strcpy(m_name, contentType);
   }
   ~Bottle() {
      delete[] m_name;
   }
   Bottle& operator=(const char* contType) {
      delete[] m_name;
      m_name = new char[strlen(contType) + 1];
      strcpy(m_name, contType);
      return *this;
   }
   double operator+=(double value) {
      double overflow = 0;
      m_contentValue += value;
      if (m_contentValue > m_capacity) {
         overflow = m_contentValue - m_capacity;
         m_contentValue = m_capacity;
      }
      return overflow;
   }
   Bottle operator+=(double value) {
      Bottle overflow;
      ///
      return overflow;
   }
   Bottle& opeartor = (const Bottle & B);
};

int main() {
   Bottle b;
   Bottle c("Apple juice", 150);
   b = "Orange Juice";
   double a;
   a = b += 100;
   // b should have 100 as content value
   // a should be zero
   a = b += 200;
   // b should have 250 as content value
   // a should 50;
   b = c += 200;
   return 0;
}