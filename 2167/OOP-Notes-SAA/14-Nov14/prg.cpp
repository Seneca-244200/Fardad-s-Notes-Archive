#include <iostream>
#include <cstring>
#include <iomanip>
#include "sort.h"
using namespace std;

class Car{
  char _plate[9];
  char _makeModel[41];
public:
  Car(const char* plate = "", const char* makeModel = ""){
    set(plate, makeModel);
  }
  void set(const char* plate, const char* makeModel){
    strncpy(_plate, plate, 8);
    _plate[8] = 0;
    strncpy(_makeModel, makeModel, 40);
    _makeModel[40] = 0;;
  }
  ostream& display(ostream& os)const{
    return os << _plate << " " << _makeModel;
  }
  istream& read(istream& is){
    is >> _plate;
    is.getline(_makeModel, 40, '\n');
    return is;
  }
  bool operator==(const char* plate)const{
    return strcmp(_plate, plate) == 0;
  }
  bool operator<(const Car& C)const{
    return strcmp(_makeModel, C._makeModel) < 0;
  }
  bool operator>(const Car& C)const{
    return strcmp(_makeModel, C._makeModel) > 0;
  }
  bool operator==(const Car& C)const{
    return strcmp(_makeModel, C._makeModel) == 0;
  }
};

ostream& operator<<(ostream& os, const Car& c){
  return c.display(os);
}

istream& operator>>(istream& is, Car& c){
  return c.read(is);
}


class Student{
  int _stno;
  char _name[41];
public:
  Student(){
    set(0, "");
  }
  Student(int stno, const char* name){
    set(stno, name);
  }
  void set(int stno, const char* name){
    _stno = stno;
    strcpy(_name, name);
  }
  ostream& display(ostream& os)const{
    return os << _stno << " " << _name;
  }
  istream& read(istream& is){
    is >> _stno;
    is.getline(_name, 40, '\n');
    return is;
  }
  bool operator==(int stno)const{
    return _stno == stno;
  }
  bool operator<(const Student& S){
    return strcmp(_name, S._name) < 0;
  }
  bool operator>(const Student& S){
    return strcmp(_name, S._name) > 0;
  }
  bool operator==(const Student& S){
    return strcmp(_name, S._name) == 0;
  }
  bool operator==(const char* name){
    return strcmp(_name, name) == 0;
  }
};

ostream& operator<<(ostream& os, const Student& s){
  return s.display(os);
}

istream& operator>>(istream& is, Student& s){
  return s.read(is);
}

class Employee{
  int _empno;
  char _name[41];
  double _salary;
public:
  Employee(){
    set(0, "", 0.0);
  }
  Employee(int stno, const char* name, double salary){
    set(stno, name, salary);
  }
  void set(int stno, const char* name, double salary){
    _empno = stno;
    strcpy(_name, name);
    _salary = salary;
  }
  ostream& display(ostream& os)const{
    return os << _empno << " " << _name << ", " << setprecision(2) << fixed << _salary;
  }
  istream& read(istream& is){
    is >> _empno;
    is.getline(_name, 40, ',');
    is >> _salary;
    return is;
  }
  bool operator==(int empno)const{
    return _empno == empno;
  }
  bool operator<(const Employee& E){
    return strcmp(_name, E._name) < 0;
  }
  bool operator>(const Employee& E){
    return strcmp(_name, E._name) > 0;
  }
  bool operator==(const Employee& E){
    return strcmp(_name, E._name) == 0;
  }
  bool operator==(const char* name){
    return strcmp(_name, name) == 0;
  }
};


ostream& operator<<(ostream& os, const Employee& E){
  return E.display(os);
}

istream& operator>>(istream& is, Employee& E){
  return E.read(is);
}


using namespace oop244;
int main(){
  int i;
  Car C[5] = { Car("DEFGHI", "Tesla Model S"), Car("ABCDEF", "BMW 320"),
     Car("CDEFGH", "Ford Festiva"), Car("BCDEFG", "Ford Festiva"), Car("EFGHIJ", "Nissan Maxima") };
  Student S[6] = { Student(23456, "Lisa Simpson"), Student(12345, "Bart Simpson"),
     Student(45678, "Ralph Wiggum"), Student(56789, "Milhouse Van Houten"), 
     Student(67890, "Todd Flanders"), Student(34567, "Nelson Muntz") };
  Employee E[6] = { Employee(213456, "Carl Carlson", 62344.56), 
     Employee(122345, "Mindy Simmons", 65432.44),
     Employee(435678, "Lenny Leonard", 43213.22),
     Employee(546789, "Waylon Smithers", 654321.55),
     Employee(657890, "Frank Grimes", 34567.88), 
     Employee(364567, "Homer Simpson", 55432.11) };
  int vals[10] = { 2, 6, 4, 67, 4, 6, 7, 5, 4, 6 };
  sort(C, 5);
  sort(S, 6, false);
  sort(E, 6, true);
  sort(vals, 10);
  for (i = 0; i < 5; i++){
    cout << (i + 1) << ": " << C[i] << endl;
  }
  cout << "-----------------" << endl;
  for (i = 0; i < 6; i++){
    cout << (i + 1) << ": " << S[i] << endl;
  }
  cout << "-----------------" << endl;
  for (i = 0; i < 6; i++){
    cout << (i + 1) << ": " << E[i] << endl;
  }
  for (i = 0; i < 10; i++){
    cout << (i + 1) << ": " << vals[i] << endl;
  }
  return 0;
}