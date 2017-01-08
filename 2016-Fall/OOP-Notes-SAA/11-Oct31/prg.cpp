#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
class Name {
   char first_[21];
   char last_[41];
public:
   Name(char first[] = "", char last[] = "") {
      strncpy(first_, first,20);
      first_[20] = 0;
      strncpy(last_, last, 40);
      last_[40] = 0;
   }
   ostream& display(ostream& os)const {
      return os << first_ << " " << last_;
   }
   istream& read(istream& is) {
      return is >> first_ >> last_;
   }
};
ostream& operator<<(ostream& os, const Name& N) {
   return N.display(os);
}
istream& operator >> (istream& is, Name& N) {
   return N.read(is);
}

int main() {
   Name N;
   ofstream fout("output.txt");
   cout << "Please enter your first and last name space seperated" << endl << "> ";
   cin >> N;
   fout << "Hello " << N << "! Welcome to my program!" << endl;
   return 0;
}

