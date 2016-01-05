#include <iostream>
using namespace std;
#include "container.h"
Container::Container(int size){
   _data = new int[_size = size];
   for (int i = 0; i < size; i++){
      _data[i] = i * 10;
   }
}
ostream& Container::display(ostream& o){
   for (int i = 0; i < _size; i++){
      o << _data[i] << " ";
   }
   return o;
}
Container::~Container(){
   delete[] _data;
}
ostream& operator<<(ostream& os, Container& C){
   return C.display(os);
}

