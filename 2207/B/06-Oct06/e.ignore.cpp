#include <iostream>
//using namespace std;
// cout an object of type ostream
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
using namespace std;
int main() {
   char  ch; // << what is the type category of ch
   int a = 12345;
   double b = 123.456;
   char message[128] = "How are you?";
   char nextThing[3];
   cout << "Enter a stirng" << endl;
   cin.ignore('A'); //<< will skip 65 characters from input
   cin >> message;
   cout << message;
   return 0;
}