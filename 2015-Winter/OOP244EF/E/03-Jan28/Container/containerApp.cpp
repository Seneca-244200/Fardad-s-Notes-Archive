#include <iostream>
using namespace std;
#include "container.h"
using namespace oop244f;
int menu();

int main(){
   bool done = false;
   double value;
   Container C;
   double cap; // capacity
   char contType[MAX_CONTTYPE_LEN+1];
   char unit[MAX_UINT_LEN+1];
   cout<<"Container App"<<endl<<endl
       <<"Please enter the content type of the container: ";
   cin>>contType;
   cout<<"Please enter the capacity and unit: (300 CC, or 4 Liter) ";
   cin>>cap>>unit;
   C.setContentType(contType);
   C.setUnit(unit);
   C.setCapacity(cap);
   C.setQuantity(0.0); // it is empty initialy
   C.display();
   while (!done){
      switch (menu()){
      case 1:
         if (C.isFull()){
            cout << "Sorry the container is full!" << endl;
         }
         else{
            cout << "How many " << C.getUnit() << "s of " << C.getContentType() << " you would like to add? ";
            cin >> value;
            value = C.fill(value);
            if (C.spilled()){
               cout << "You spilled " << value << " " <<C.getUnit()<<"(s) of " << C.getContentType() << endl;
            }
         }
         break;
      case 2:
         if (C.isEmpty()){
            cout << "Sorry the container is empty!" << endl;
         }
         else{
            cout << "How many " << C.getUnit() << "s of " << C.getContentType() << " you would like to pour out? ";
            cin >> value;
            if (C.empty(value) < value){
               cout << "Sorry, not enough!" << endl;
            }
         }
         break;
      case 3:
         cout << "Poured " << C.empty() << " " << C.getUnit() << "(s) out!" << endl;
         break;
      case 4:
         cout << "Capacity: " << C.getCapacity() << " " << C.getUnit() << "s" << endl;
         C.display();
         break;
      case 0:
         done = true;
         break;
      default:
         cout << "Invalid Selection!" << endl;
      }
      cout << endl;
   }
   return 0;
}

int menu(){
   int selection;
   cout
      << "1- Fill" << endl
      << "2- Pour out" << endl
      << "3- Empty" << endl
      << "4- Check" << endl
      << "0 - Exit" << endl
      << "> ";
   cin >> selection;
   return selection;
}

