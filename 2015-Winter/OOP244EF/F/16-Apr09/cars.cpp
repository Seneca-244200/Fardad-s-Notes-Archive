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

class ParkingLot{
  Car* _cars;
  int _num;
  ParkingLot(const ParkingLot& p){}
  void operator=(const ParkingLot& p){}
public:
  ParkingLot(const Car* cars, int num){
    _cars = new (nothrow)Car[num];
    for (int i = 0;_cars && i < num; _cars[i] = cars[i], i++);
  }
  ~ParkingLot(){
    if(_cars) delete[] _cars;
  }
  ostream& display(ostream& os)const{
    for (int i = 0;_cars && i < _num; cout << _cars[i] << endl, i++);
    return os;
  }
};

ostream& operator<<(ostream& os, const ParkingLot& p){
  return p.display(os);
}

int main(){
  Car c[4] = { Car("Benz", "abcdef"), Car("chevy", "qwert"), Car("Ford", "zxccvb"), Car("Honda", "yuiop") };
  ParkingLot P(c, 4);
  cout << P << endl;
}