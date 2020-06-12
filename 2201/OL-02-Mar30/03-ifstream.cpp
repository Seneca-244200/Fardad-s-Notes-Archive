#include <iostream>
#include <fstream>
using namespace std;
int main() {
   char str[201];
   ifstream fin("MyFile.txt");
   fin.getline(str, 200, 'o');
   if (fin.fail())
      cout << "Can not read, probably end of file " << endl;
   else 
      cout <<'>'<< str <<'<' << endl;
   fin.getline(str, 200);
   if (fin.fail())
      cout << "Can not read, probably end of file " << endl;
   else
      cout << '>' << str << '<' << endl;
   fin.getline(str, 200);
   if (fin.fail())
      cout << "Can not read, probably end of file " << endl;
   else
      cout << '>' << str << '<' << endl;
   fin.getline(str, 200);
   if (fin.fail())
      cout << "Can not read, probably end of file " << endl;
   else
      cout << '>' << str << '<' << endl;
   fin.getline(str, 200);
   if (fin.fail())
      cout << "Can not read, probably end of file " << endl;
   else
      cout << '>' << str << '<' << endl;
   return 0;
}