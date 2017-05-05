// OOP244 Workshop 10 - Templates 
// File: w10.cpp
// Version: 1.0
// Date: 2017/04/09
// Author: Fardad Soleimanloo
// Description:
// This file tests the in-lab section of your workshop
/////////////////////////////////////////////


#include <iostream>
#include "Car.h"
#include "Employee.h"
#include "Student.h"
#include "validate.h"
using namespace std;
using namespace ict;
int main(){
  int i;
  bool v[10];
  Student S[6] = { { 2345, "Lisa Simpson" }, { 12345, "Bart Simpson" }, 
                   { 4567, "Ralph Wiggum" }, { 56789, "Milhouse Van Houten" }, 
                   { 67890, "Todd Flanders" }, { 34567, "Nelson Muntz" } };
  Employee E[6] = { Employee(213456, "Carl Carlson", 62344.56), Employee(122345, "Mindy Simmons", 65432.44), 
                    Employee(435678, "Lenny Leonard", 43213.22), Employee(546789, "Waylon Smithers", 654321.55), 
                    Employee(657890, "Frank Grimes", 34567.88), Employee(364567, "Homer Simpson", 55432.11) };
  int vals[10] = { 2, 6, 4, 67, 4, 6, 7, 5, 4, 6 };
  char cvals[10] = { 'A','e','B', 'd', 'e', 'G', 'H', 'l', 'p','x' };
  Car C[5] = { Car("DEFGHI", "Tesla Model S"), Car("BBCDEF", "BMW 320"),
               Car("CDEFG", "Ford Festiva"), Car("BCDEFG", "Ford Festiva"),
               Car("AFGHIJ", "Nissan Maxima") };
  if (!validate(Student(11111), Student(99999), S, 6, v)){
    cout << "These students have invalid student ids:" << endl;
    for (i = 0; i < 5; i++){
      if (!v[i]) cout << S[i] << endl;
    }
  }
  else{
    cout << "All students have valid students ids" << endl;
  }
  if (!validate(Employee(111111), Employee(999999), E, 6, v)){
    cout << "These employee have invalid employee ids:" << endl;
    for (i = 0; i < 5; i++){
      if (!v[i]) cout << S[i] << endl;
    }
  }
  else{
    cout << "All employee have valid employee ids" << endl;
  }
  if (!validate(3, 7, vals, 10, v)){
    cout << "These integer values are invalid: " << endl;
    for (i = 0; i < 10; i++){
      if (!v[i]) cout << vals[i] << endl;
    }
  }
  else{
    cout << "All integer values are valid" << endl;
  }
  if (!validate(Car("BBBBBB"), Car("ZZZZZZ"), C, 5, v)){
    cout << "These cars have invalid license plates:" << endl;
    for (i = 0; i < 5; i++){
      if (!v[i]) cout << C[i] << endl;
    }
  }
  else{
    cout << "All cars have valid license plates" << endl;
  }
  if (!validate('B', 'P', cvals, 10, v)){
    cout << "These character values are invalid: " << endl;
    for (i = 0; i < 10; i++){
      if (!v[i]) cout << cvals[i] << endl;
    }
  }
  else{
    cout << "All character values are valid" << endl;
  }
  return 0;
}

/*
output:
These students have invalid student ids:
2345 Lisa Simpson
4567 Ralph Wiggum
All employee have valid employee ids
These integer values are invalid:
2
67
These cars have invalid license plates:
AFGHIJ Nissan Maxima
These character values are invalid:
A
e
d
e
l
p
x
*/