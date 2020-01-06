#include <iostream>
#include <fstream>
using namespace std;
struct PhoneRec {
   int area;
   int number;
   char name[81];
public:
   PhoneRec() :area(0), number(0) {
      name[0] = 0;
   }
   ostream& display(ostream& os)const {
      return os << area << "-" << number << ",(" << name << ")";
   }
   istream& read(istream& is) {
      bool res = true;
      is >> area;
      is.ignore();
      is >> number;
      is.ignore();
      is.getline(name, 80, '\n');
      return is;
   }
};
ostream& operator<<(ostream& os, const PhoneRec& pr) {
   return pr.display(os);
}
istream& operator>>(istream& is, PhoneRec& pr) {
   return pr.read(is);
}

int main() {
   char str[81];
   PhoneRec r;
   fstream myfile("data.txt", ios::in );
   do{
      myfile >> r;
      if(myfile) cout << r << endl;
   } while (myfile);
   return 0;
}