#include <iostream>
using namespace std;
class Name {
   // whatever
public:
   Name(const char theName[]);
};
class Line {
   size_t m_len;
   Name m_name;
public:
   Line();

};
Line::Line():m_len(0), m_name("some name") {// initialization section overrides the inline initialization
}
int main() {
   cout << "OOP244 NAA - Mar 11" << endl;
   Line L1;
   return 0;
}