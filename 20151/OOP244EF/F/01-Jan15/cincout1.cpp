#include <iostream>
using namespace std;

int main(){
   int age;
   cout << "How old are you? ";
   cin >> age;
   if (age >= 19){
      cout <<"Oh! you are "<<age<<"!"<<endl
           <<"What would you like to drink?" << endl;
   }
   else{
      cout << "No drinks for you!" << endl;
   }
   return 0;
}