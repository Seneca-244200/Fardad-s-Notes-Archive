#include <cstring>
#include "Car.h"
using namespace std;
namespace oop244{

  Car::Car(const char* licPlt, const char* make, const char* model, int year):_year(year){
    strncpy(_licensePlate, licPlt, 8);
    _licensePlate[8] = 0;
    strncpy(_make, make, 30);
    _make[30] = 0;
    strncpy(_model, model, 30);
    _model[30] = 0;
  }
  void Car::run(){
    cout << _make << " " << _model << " is running!" << endl;
  }


  Car::~Car(){}


  ostream& Car::display(ostream& ostr)const  {
    return ostr << _year << " " << _make << " " << _model << " licence plate number: " << _licensePlate;
  }


  istream& Car::read(istream& istr)  {
    cout << "Car Entry\nMake: ";
    istr.getline(_make, 30, '\n');
    cout << "Model: ";
    istr.getline(_model, 30, '\n');
    cout << "Year: ";
    istr >> _year;
    istr.ignore();
    cout << "License Plate Number: ";
    istr.getline(_licensePlate, 30, '\n');
    return istr;
  }
}