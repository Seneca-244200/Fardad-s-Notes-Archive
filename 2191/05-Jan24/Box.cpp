#include <iostream>
#include "Box.h"
using namespace std;
namespace sict {
  /*Box::Box() {
    setEmpty();
  }*/
  Box::Box(int side) {
    set(side, side);
  }
  Box::Box(int w, int h) {
    set(w, h);
  }
  void Box::set(int width, int height) {
    if (width > 0 && width < 70)
      m_w = width;
    else
      m_w = 10;
    if (height > 0 && height < 20)
      m_h = height;
    else
      m_h = 10;
  }
  void Box::draw() {
    int i;
    int j;
    if (isEmpty()) {
      cout << "Box is not set!" << endl;
    }
    else {
      for (i = 0; i < m_w; i++) cout << '*';
      cout << endl;
      for (j = 0; j < m_h - 2; j++) {
        cout << '*';
        for (i = 0; i < m_w - 2; i++) cout << ' ';
        cout << '*' << endl;
      }
      for (i = 0; i < m_w; i++) cout << '*';
      cout << endl;
    }
  }
  void Box::setEmpty() {
    m_w = m_h = 0;
  }
  bool Box::isEmpty() {
    return m_w == 0 || m_h == 0;
  }
  Box::~Box() {
    cout << m_w << "x" << m_h << " is gone!" << endl;
  }
}