#include <iostream>
using namespace std;

class Vehicle{
public:
  virtual void move() const = 0;
   ~Vehicle() { cout << "V Trashed" << endl << "---" << endl; };
   void stop()const{
     cout << "STOPPED!" << endl;
   }
};

class Car : public Vehicle{
public:
  void move() const {cout << "C Go!" << endl;}
  ~Car() { cout << "C Trashed" << endl; }
};

class BMW : public Car{
public:
  void move() const { cout << "Brrroooom Go!" << endl; }
  ~BMW() { cout << "B Trashed" << endl; }
};

class Tesla : public Car{
public:
  void move() const { cout << "whooooooosh Go!" << endl; }
  ~Tesla() { cout << "Never Trash a Tesla!!!" << endl; }
};

class BMW320 : public BMW{
public:
  ~BMW320() { cout << "320 Trashed" << endl; }
};


//int main(){
//  Vehicle* V[4] = { new Car, new BMW, new Tesla, new BMW320 };
//  for (int i = 0; i < 4; i++) V[i]->move();
//  for (int i = 0; i < 4; i++) delete V[i];
//  return 0;
//}

//int main(){
//  Tesla T;
//  BMW320 B3;
//  Car C;
//  BMW B;
//  Vehicle* V[4] = { &C, &B, &T, &B3 };
//  for (int i = 0; i < 4; i++) V[i]->move();
//  return 0;
//}


//int main(){
//  Vehicle* V[5] = { new Vehicle, new Car, new BMW, new Tesla, new BMW320 };
//  for (int i = 0; i < 5; i++) V[i]->move();
//  return 0;
//}


