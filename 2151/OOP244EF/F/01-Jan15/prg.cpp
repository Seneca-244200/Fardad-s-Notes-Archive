#include <iostream>
using namespace std;

int main(){
   int age;
   char name[81];
   cout << "please tell me your name and age: ";
   cin >> name >> age;
   if (age >= 19){
      cout <<"Hello "<<name<<endl
           <<"What would you like to drink?" << endl;
   }
   else{
      cout <<name<< " get out of here!" << endl;
   }
   return 0;
}