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

#define PARKING_SIZE 50
class ParkingLot{
  Car* _cars[PARKING_SIZE];
  int _num;
  /*used to be done this way:
  ParkingLot(const ParkingLot& p){}
  void operator=(const ParkingLot& p){}*/
public:
  ParkingLot(){
    for (int i = 0; i < PARKING_SIZE; _cars[i] = (Car*)0, i++);
    _num = 0;
  }
  ~ParkingLot(){
    for (int i = 0; i < PARKING_SIZE; i++){
      delete _cars[i];
    }
  }
  bool addCar(const Car& C){
    bool _flag = false;
    if (_num < PARKING_SIZE){
      _cars[_num++] = new (nothrow)Car(C);
      _flag = true;
    }
    return _flag;
  }
  ParkingLot(const ParkingLot& p) = delete;
  void operator=(const ParkingLot& p) = delete;
  ostream& display(ostream& os)const{
    for (int i = 0; i < _num; cout << _cars[i] << endl, i++);
    return os;
  }
};

ostream& operator<<(ostream& os, const ParkingLot& p){
  return p.display(os);
}

int main(){
  Car c[4] = { Car("Benz", "abcdef"), Car("chevy", "qwert"), Car("Ford", "zxccvb"), Car("Honda", "yuiop") };
  ParkingLot P;
  for (int i = 0; i < 4; i++){
    P.addCar(c[i]);
  }
  cout << P << endl;
}