#include <iostream>
#include <cstring>
using namespace std;
class Name {
private:
   char* m_value;
public:
   Name(const char* name = "") {
      m_value = new char[strlen(name) + 1];  // PLUS ONE
      strcpy(m_value, name);
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
   Name M = "Fred Soley";
   cout << "M: " << M << endl;
   M = N;
   cout << "N: " << N << endl;
   cout << "M: " << M << endl;
   return 0;// crashes at the end;
}