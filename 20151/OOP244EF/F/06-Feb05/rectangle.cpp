#include "rectangle.h"
#include <iostream>
#include <cstring>
#include <new>
using namespace std;
namespace oop244f{
  Rectangle::Rectangle(int width, int height,
    char fill){
    set(width, height, fill);
    _title = NULL;// (char*)0;
  }
  Rectangle::Rectangle(int side, char fill){
    set(side, side, fill);
    _title = NULL;// (char*)0;
  }
  Rectangle::Rectangle(){
    set(5, 5);
    _title = NULL;// (char*)0;
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
  void Rectangle::set(char fill){
    _fill = fill;
  }
  void Rectangle::set(const char* title){
    allocate(strlen(title) + 1);
    strcpy(_title, title);
  }
  void Rectangle::clear(){
    deallocate();
  }
  void Rectangle::allocate(int size){
    if (_title){ // is not NULL and is already in use
      deallocate();
    }
    _title = new (nothrow) char[size];
  }
  void Rectangle::deallocate(){
    if (_title){// is pointing to allocated memory
      delete[] _title;
      _title = (char*)0; // NULL
    }
  }
  void Rectangle::draw(){
    int
      i,
      j;
    if (_title){ // is not NULL (title exists)
      cout << _title << endl;
    }
    for (i = 0; i < _width; i++){
      cout.put(_fill); // cout<<_fill;
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
      cout.put(_fill); // cout<<_fill;
    }
    cout << endl;
  }
}












