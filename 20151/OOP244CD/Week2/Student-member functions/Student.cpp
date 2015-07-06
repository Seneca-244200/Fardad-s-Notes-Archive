 #include<iostream>
 #include "Student.h"
 using namespace std;

 
void Student::set(int n, const char* g) {
     int i;

     no = n; // store the Student number as received

     // store the grades as received within the available space 
     for (i = 0; g[i] != '\0' && i < 13; i++) {
         grade[i] = g[i];
     grade[i] = '\0';        // set the last byte to null
 }
 
 void Student::display() const {
	cout << no << ' ' << grade;
     
 }
 }