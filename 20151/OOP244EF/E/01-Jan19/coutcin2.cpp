#include <iostream>
using namespace std;
int main(){
   int age;
   char name[81];
   cout << "Please tell me your name and age: ";
   cin >> name >> age;
   if (age >= 19){
      cout << "Hello " << name << endl
         << "What would you like to drink? " << endl;
   }
   else{
      cout << name << "! get the heck out of here!!!!" << endl;
   }
   return 0;
}