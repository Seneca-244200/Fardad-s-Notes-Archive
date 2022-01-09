#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Marks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34, 56,99.8,45 };
   cout << "Methods, Privacy and DMA!" << endl;
   Marks finals;
   Marks midterms;
   finals.init("OOP244 Final", samples, 4);
   midterms.init();
   //finals.m_noOfValues = 3;  can not be modified direclty because it is private
   finals.display();
   midterms.display();
   finals.add(99.9);
   finals.display();
   return 0;
}