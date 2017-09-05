 #include<iostream>
 #include "Student.h"
 using namespace std;
 
 int main()
 {
 
	Student harry;

	harry.set(975, "ABC");
	harry.display();

	cout << harry.no; // ERROR why?
 
 }