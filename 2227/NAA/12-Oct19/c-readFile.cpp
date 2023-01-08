#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
class CC {
   char m_name[128];
   long long m_cc;
   int m_mon;
   int m_year;
   int m_cvv;
public:
   ifstream& load(ifstream& file) {
      file.getline(m_name, 128, ',');
      file >> m_cc;
      file.ignore();
      file >> m_cvv;
      if (m_cvv <= 99 || m_cvv > 999) file.setstate(ios::failbit);
      file.ignore();
      file >> m_mon;
      file.ignore();
      file >> m_year;
      file.ignore(10000, '\n');
      return file;
   }
   ostream& display(ostream& ostr = std::cout)const {
      ostr << "(" << m_cc << "-" << m_mon << "/" << m_year << "), " << m_name;
      return ostr;
   }
};
ostream& operator<<(ostream& ostr, const CC& ro) {
   return ro.display(ostr);
}
int main() {
   CC cc;
   ifstream ccfile("cc.csv");
   while(ccfile) {
      if (cc.load(ccfile)) {
         cout << cc << endl;
      }
   }
   return 0;
}