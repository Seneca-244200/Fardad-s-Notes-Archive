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
    cout << "Name: ";
    istr.getline(_name, 30, '\n');
    cout << "Employee Number: ";
    istr >> _empNo;
    istr.ignore();
    return istr;
  }
}