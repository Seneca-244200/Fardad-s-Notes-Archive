#include <iostream>
#include <fstream>
using namespace std;
int main() {
   char str[81];
   ofstream fout("output.txt");
   fout << "Hello I am writing this" << endl;
   fout.width(20);
   fout.fill('*');
   fout.setf(ios::right);
   fout << "right" << endl;
   fout.unsetf(ios::right);
   fout.fill(' ');
   fout << "I am done!!!" << endl;
   fout.close();
   ifstream fin("output.txt");
   fin >> str;
   cout << str << endl;
   fin.ignore(11000, '\n');
   fin >> str;
   cout << str << endl;
   return 0;
}