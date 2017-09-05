#include <iostream>
#include <cstring>
using namespace std;
class Name {
private:
   char* m_value;
   void alloCopy(const char* name) {
      m_value = new char[strlen(name) + 1];  // PLUS ONE
      strcpy(m_value, name);
   }
public:
   Name(const char* name = "") {
      //alloCopy(name);
      m_value = nullptr;
      operator=(name);
   }
   //   Name(const Name& N) = delete; prevent copying
   Name(const Name& N) {
      alloCopy(N.value());
      //m_value = new char[strlen(N.value()) + 1];  // PLUS ONE
      //strcpy(m_value, N.value());
   }
   const Name& operator=(const Name& N) {
      delete[] m_value;
      alloCopy(N.value());
      return *this;
   }
   const Name& operator=(const char* name) {
      delete[] m_value;
      m_value = new char[strlen(name) + 1];  // PLUS ONE
      strcpy(m_value, name);
      return *this;
   }
   ~Name() {
      delete[] m_value;
      m_value = nullptr;// not needed in the destructor, since m_value is going to die!
   }
   const char* value()const {
      return m_value;
   }
};

ostream& operator<<(ostream& ostr, const Name& N) {
   return ostr << N.value();
}


int main() {
   Name N = "Fardad Soleimanloo";
   cout << "N: " << N << endl;
   N = "Fred Soley";
   cout << "M: " << N << endl;
   return 0;
}