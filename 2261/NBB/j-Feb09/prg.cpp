#include <iostream>
#include <fstream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
class Student {
   char m_name[81]{};
   size_t m_stno{};
   float m_gpa{};
public:
   istream& readcsv(istream& istr = std::cin) {
      istr.getline(m_name, 81, ',');
      istr >> m_stno;
      istr.ignore();
      istr >> m_gpa;
      istr.ignore(100000, '\n');
      return istr;
   }
   ostream& write(ostream& ostr = std::cout)const {
      ostr << "Name: " << m_name << ", stno: " << m_stno << ", gpa: ";
      ostr.setf(ios::fixed);
      ostr.precision(1);
      return ostr << m_gpa;
   }
};
ostream& operator<<(ostream& left, const Student& right) {
   return right.write(left);
}
istream& operator>>(istream& left, Student& right) {
   return right.readcsv(left);
}


int main() {
   Student S;
   ifstream file("student.csv");
   while (file) {
      file >> S;
      if(file)
         cout << S << endl;
   }
   return 0;
}