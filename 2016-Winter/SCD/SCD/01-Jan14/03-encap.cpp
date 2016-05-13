#include <iostream>
using namespace std;

struct Car{
private:
  double enginPower;
  char transType[51];
public:
  void SetEnginPower(double ep){
    enginPower = ep;
  }
  double getEnginPower(){
    return enginPower;
  }
  void drive(){

  }
};

int main(){
  Car Tesla;
  double carPower;
  Tesla.SetEnginPower(3.4);
  Tesla.drive();
  carPower = Tesla.getEnginPower();
  return 0;
}
