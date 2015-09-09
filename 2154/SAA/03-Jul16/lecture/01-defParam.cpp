#include <iostream>
using namespace std; 
void bar(int len = 70, char ch = '-'){
   for (int i = 0; i < len; i++){
      cout << ch;
   }
   cout << endl;
}

//void bar(int len){
//   bar(len, '-');
//}

//void bar(){
//   bar(70, '-');
//}
int main(){
   bar(20, '=');
   bar(30, '=');
   bar(10, '=');
   bar(40);
   bar();
   return 0;
}