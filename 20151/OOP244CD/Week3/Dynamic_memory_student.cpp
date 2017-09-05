// Memory Allocation Failure
 // allocationFailure.cpp

 #include <new> // required for nothrow
 #include <iostream>
 using namespace std;

 struct Student {
     int no;
     char grade[14];
 };

 int main( ) {
     int n;
     Student* student = nullptr;

     cout << "Enter the number of students : ";
     cin >> n;
     student = new (nothrow) Student[n]; // for nullptr on failure
     if (student == nullptr)
         cout << "Memory Allocation Failed" << endl;
     else {
         for (int i = 0; i < n; i++) {
             cout << "Student Number: ";
             cin  >> student[i].no;
             cout << "Student Grades: ";
             cin  >> student[i].grade;
         }

         for (int i = 0; i < n; i++)
             cout << student[i].no << ": " << student[i].grade << endl; 

         delete [] student;
         student = nullptr;
     }
 }