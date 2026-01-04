#include <iostream>
using namespace std;


struct Transcirpt;
struct Student {
   Transcript* t;
};
struct Transcript {
   Student owner;


};

int main() {

   return 0;
}