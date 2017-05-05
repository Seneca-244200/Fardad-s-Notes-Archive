#include <iostream>
#include <cstring>
using namespace std;
class Name {
private:
   char m_value[41];
public:
   Name(const char* name = "") {
      strncpy(m_value, name, 40);
      m_value[40] = 0;
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
   cout  << "Hello My name is: " << N << endl;
   return 0;
}