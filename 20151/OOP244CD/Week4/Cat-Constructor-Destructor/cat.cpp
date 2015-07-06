//cat.cpp
#include <iostream>
 using namespace std;
#include "cat.h"

Cat::Cat()
{
// set member variable to safe default values
 cout << "Entering no-argument constructor" << endl;
 itsAge = 0;
 itsWeight = 0;
 }
 
 Cat::Cat(int a, int w)
{
// set member variable to the values passed through arguments
 cout << "Entering overloaded constructor" << endl;
 
 //Check for valid input. If the input values are invalid, set the member variables to their default values.
 if(a>0 && w>0){
	itsAge = a;
	itsWeight = w;
 }else{
	itsAge = 0;
	itsWeight = 0;
 }
 
 }

  Cat::~Cat()
{

 cout << "Entering the destructor" << endl;

 }


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

 void Cat::display() const
{
 cout<<"Age:"<<itsAge<<"- Weight:"<<itsWeight<<endl;
}
