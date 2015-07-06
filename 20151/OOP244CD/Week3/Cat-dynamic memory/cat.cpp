//cat.cpp
#include <iostream>
 using namespace std;
#include "cat.h"

void Cat::SetAge(int age)
{
// set member variable its age to
// value passed in by parameter age
 itsAge = age;
 }
 
 int Cat::GetAge()
{
 return itsAge;
 }
 
 void Cat::SetWeight(int weight)
{
 itsWeight = weight;
}
 
 int Cat::GetWeight()
{
 return itsWeight;
}

 void Cat::Meow()
{
 cout<<"Meow...";
}
