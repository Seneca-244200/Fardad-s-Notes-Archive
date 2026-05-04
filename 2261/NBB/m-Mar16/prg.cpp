#include <iostream>
#include <fstream>
using namespace std;
void Helper(ostream& ostr) {
   if(&ostr == &cout){
      ostr << "On Screen " ;
   }
   else {
      ostr << "Some other place ";
   }
   ostr << "Helper is called" << endl;
   
}
int main() {
   ofstream file("hello.txt");
   cout << "OOP244NBB - Mar 16" << endl;
   file << "OOP244NBB - Mar 16" << endl;
   Helper(cout);
   Helper(file);
   return 0;
}