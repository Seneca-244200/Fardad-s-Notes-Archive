#include <iostream>
using namespace std;
struct Name {
   char first[21];
   char last[31];
};
void printName(const Name& A) {
   cout << A.first << " " << A.last << endl;

}
int main() {
   Name N = { "Fred", "Soley" };
   printName(N);
   return 0;
}