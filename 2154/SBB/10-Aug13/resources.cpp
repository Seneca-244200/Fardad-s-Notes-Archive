#include <iostream>
#include <cstring>


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
    cout << "Plate:";
    is >> _plate;
    cout << "Make Model: ";
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
#define PARKING_SIZE 50
class ParkingLot{
  Car* _cars[PARKING_SIZE];
  //ParkingLot(const ParkingLot& A){}
  //void operator=(const ParkingLot& A){}
public:
  ParkingLot(){
    for (int i = 0; i < PARKING_SIZE; _cars[i] = (Car*)0, i++);
  }
  ParkingLot(const ParkingLot&) = delete;
  void operator=(const ParkingLot& A) = delete;
  bool park(int spot, Car C){
    // int index = spot - 1;
    bool res = false;
    if (_cars[spot - 1] == (Car*)0){
      _cars[spot - 1] = new Car(C);
      res = true;
    }
    return res;
  }
  int nextSpot(){
    int spot = 0;
    for (int i = 0; spot == 0 && i < PARKING_SIZE; i++){
      if (_cars[i] == (Car*)0){
        spot = i + 1;
      }
    }
    return spot;
  }
  bool nextSpot(int& sopt){

  }
  virtual ~ParkingLot(){
    for (int i = 0; i < PARKING_SIZE; i++){
    //  if (_cars[i]) delete _cars[i]; from old habit of c programmers, really you don't need it
      delete _cars[i];
    }
  }
};