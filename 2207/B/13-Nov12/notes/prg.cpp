#include <iostream>
using namespace std;
class SDDS_Debug {
   std::streambuf* the_buf;
public:
   SDDS_Debug() :the_buf(cerr.rdbuf()) {
   }
   void deactivate() {
      cerr.rdbuf(nullptr);
   }
   void activate() {
      cerr.rdbuf(the_buf);
   }
};

SDDS_Debug debug;

int main() {
   debug.deactivate();
   cout << "I am printing with cout!" << endl;
   cerr << "I am printing with cerr!" << endl;
   clog << "I am printing with clog!" << endl;
   debug.activate();
   cerr << "Now degub messages are printed" << endl;
   return 0;
}