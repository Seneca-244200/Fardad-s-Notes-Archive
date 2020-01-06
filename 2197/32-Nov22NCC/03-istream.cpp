#include <iostream>
#include <fstream>
using namespace std;
struct PhoneRec {
   int area;
   int number;
   char name[81];
   PhoneRec() :area(0), number(0) {
      name[0] = 0;
   }
   ostream& display(ostream& os)const {
      return os << area << "-" << number << ",(" << name << ")";
   }
};
ostream& operator<<(ostream& os, const PhoneRec& p) {
   return p.display(os);
}


bool readPhoneRec(PhoneRec& pr, ifstream& file) {
   bool res = true;
   file >> pr.area;
   file.ignore();
   file >> pr.number;
   file.ignore();
   file.getline(pr.name, 80, '\n');
   if (!file) {
      res = false;
      file.clear();
   }
   return res;
}
int main() {
   PhoneRec r;
   ifstream myfile("data.txt");
   while (readPhoneRec(r, myfile)) {
      cout << r << endl;
   }
   return 0;
}