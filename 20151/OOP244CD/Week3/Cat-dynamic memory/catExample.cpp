//main.cpp
#include <iostream>
 #include <new> // required for nothrow
 using namespace std;
#include "cat.h"

 int main() {
    int n;
    Cat* catList = nullptr;

     cout << "Enter the number of cats : ";
     cin >> n;
	 
     catList = new (nothrow) Cat[n]; // for nullptr on failure
     if (catList == nullptr)
         cout << "Memory Allocation Failed" << endl;
     else {
         for (int i = 0; i < n; i++) {
			int tempAge;
			int tempWeight;
             cout << "Cat age: ";
			 cin>>tempAge;
             catList[i].SetAge(tempAge);
             cout << "Cat weight: ";
			 cin>>tempWeight;
             catList[i].SetWeight(tempWeight);
         }

         for (int i = 0; i < n; i++)
             cout <<"Age:" <<catList[i].GetAge() << ". Weight: " << catList[i].GetWeight() << endl; 

         delete [] catList;
         catList = nullptr;
     }
}
