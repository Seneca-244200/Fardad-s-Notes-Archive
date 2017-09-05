
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
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
    return os <<_plate<<" "<<_makeModel;
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
    return strcmp(_name,name) == 0;
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
    set(stno, name);
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



template <typename T>
bool search(T A[],T& foundStd, int& foundIndx, int key, int size){
  int foundIndx = -1;
  int i;
  bool found = false;
  for (i = 0; !found && i < size; i++){
    if (A[i] == key){
      foundStd = A[i];
      foundIndx = i;
      found = true;
    }
  }
  return found;
}

bool search(Car A[], Car& foundStd, int& foundIndx, const char* key, int size){
  int foundIndx = -1;
  int i;
  bool found = false;
  for (i = 0; !found && i < size; i++){
    if (A[i] == key){
      foundStd = A[i];
      foundIndx = i;
      found = true;
    }
  }
  return found;
}


int main(){
  fstream file;
  Student S;
  int i;
  cout << "Enter student number and name, (space separated)" << endl;
  file.open("student.txt", ios::out);
  for (i = 0; i < 3; i++){
    cout << "> ";
    cin >> S;
    file << S << endl;
  }
  file.close();
  file.open("student.txt", ios::in);
  for (i = 0; i < 3; i++){
    cout << "> ";
    file >> S;
    cout << S << endl;
  }
  return 0;
}