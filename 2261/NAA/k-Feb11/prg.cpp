#include <iostream>
#include <fstream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
class Student {
   char m_name[51]{};
   size_t m_stno{};
   float m_gpa{};
public:
   istream& read(istream& istr = cin) {
      istr.getline(m_name, 51, ',');
      istr >> m_stno;
      istr.ignore();
      istr >> m_gpa;
      istr.ignore(10000, '\n');
      return istr;
   }
   ostream& print(ostream& ostr = cout)const {
      ostr.width(50);
      ostr.fill('.');
      ostr.setf(ios::left);
      ostr << m_name;
      ostr.fill(' ');
      ostr.unsetf(ios::left);
      ostr.width(8);
      ostr.fill('0');
      ostr.setf(ios::right);
      ostr << m_stno << " - ";
      ostr.unsetf(ios::right);
      ostr.fill(' ');
      ostr.precision(1);
      ostr.setf(ios::fixed);
      ostr << m_gpa;
      return ostr;
   }
};
ostream& operator<< (ostream & ostr, const Student & right) {
   return right.print(ostr);
}
istream& operator>>(istream& istr, Student& right) {
   return right.read(istr);
}
int main() {
   Student S;
   ofstream file("output.txt");
   ifstream infile("student.csv");
   file << "OOP244 NAA - Feb11" << endl;
   while (infile) {
      infile >> S;
      if (infile) {
         file << S << endl;
         cout << S << endl;
      }
   }
   return 0;
}