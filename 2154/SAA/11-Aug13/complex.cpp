#include <iostream>
#include <cstring>
#include <new>
using namespace std;

class Car{
  char _make[31];
  char _plate[9];
  void set(const char* make, const char* plate){
    strncpy(_make, make, 30);
    _make[30] = 0;
    strncpy(_plate, plate, 8);
    _plate[8] = 0;
  }
public:
  Car(){
    set("", "");
  }
  Car(const char* make, const char* plate){
    set(make, plate);
  }
  ostream& display(ostream& os)const{
    return os << _make << " " << _plate;
  }
};

ostream& operator<<(ostream& os, const Car& B){
  return B.display(os);
}
class Space{
  Car _car;
  int _no;
public:
  Space(){
    _no = 0;
  }
  Space(int no,const Car& car ){
    _no = no;
    _car = car;
  }
  ostream& display(ostream& os)const{
    return os << _no << ": " << _car;
  }
  int Number()const{
    return _no;
  }
};
ostream& operator<<(ostream& os, const Space& S){
  return S.display(os);
}

#define PARKING_SIZE 50
class ParkingLot{
  Space _spaces[PARKING_SIZE];

};