#include <cstring>
#include "Employee.h"

using namespace std;
namespace oop244{

  Employee::Employee(const char* name, int empNo): _empNo(empNo) {
    strncpy(_name, name, 30);
    _name[30] = 0;
  }

  void Employee::work(){
    cout << _name << " is working!" << endl;
  }

  ostream& Employee::display(ostream& ostr)const
  {
    return ostr << _name << ", employee number: " << _empNo;
  }

  Employee::~Employee(){}

  istream& Employee::read(istream& istr)
  {
    cout << "Employee Entry\nName: ";
    istr.getline(_name, 30, '\n');
    cout << "Employee Number: ";
    istr >> _empNo;
    istr.ignore();
    return istr;
  }
  //Employee& operator>>(Employee& E, Car& C){
  //  cout << E << " is driving: " << endl << C << endl;
  //  return E;
  //}
  Employee& Employee::drive(Car& C){
    cout << *this << " is driving: " << endl << C << endl;
    return *this;
  }  
  Employee& Employee::operator>>(Car& C){
    return drive(C);
  }
}