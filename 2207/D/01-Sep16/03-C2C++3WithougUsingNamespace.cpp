#include <iostream>

int main() {
   char name[128];
   std::cout << "What is your name? ";
   //cin >>  name;
   std::cin.getline(name, 127);
   std::cout << "Hello " << name << ", welcome to oop244 class!" << std::endl;
   return 0;
}