#include "rectangle.h"
#include <iostream>
#include <cstring>
#include <new>
using namespace std;
namespace oop244e{
  void Rectangle::allocate(int size){
    if (_title){
      delete[] _title;
    }
    _title = new (nothrow) char[size];
  }
  void Rectangle::deallocate(){
    if (_title){
      delete[] _title;
      _title = (char*)0;
    }
  }

  Rectangle::Rectangle(int width, int height,
    char fill){
    set(width, height, fill);
    _title = (char*)0; // NULL
  }
  Rectangle::Rectangle(int side){
    set(side, side);
    _title = (char*)0;
  }
  Rectangle::Rectangle(){
    set(10, 10);
    _title = (char*)0;
  }

  Rectangle::~Rectangle(){
    deallocate();
  }

  void Rectangle::set(int width, int height,
    char fill){
    _width = width < 2 ? 2 : width;
    _height = height < 2 ? 2 : height;
    _fill = fill;
  }
  void Rectangle::draw()const{
    int 
      i,
      j;
    if (_title) cout << _title << endl;
    for (i = 0; i < _width; i++){
      cout.put(_fill);
    }
    cout << endl;
    for (j = 0; j < _height - 2; j++){
      cout.put(_fill);
      for (i = 0; i < _width - 2; i++){
        cout.put(' ');
      }
      cout.put(_fill);
      cout << endl;
    }
    for (i = 0; i < _width; i++){
      cout.put(_fill);
    }
    cout << endl;
  }
  void Rectangle::set(const char* title){
    allocate(strlen(title) + 1);
    strcpy(_title, title);
  }
  void Rectangle::clear(){
    deallocate();
  }

}
