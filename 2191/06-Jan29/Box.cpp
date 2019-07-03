#include <iostream>
#include "Box.h"
using namespace std;
namespace sict {
  void debug(const char message[], int w, int h) {
    cout << message << ", w: " << w <<" h: " << h << endl;
  }
  Box::Box() {
    setEmpty();
    debug("Defaulting Box", m_w, m_h);
  }
  Box::Box(int side) {
    set(side, side);
    //*this = Box(side, side); // bad way since an extra box is created for now reason
    debug("one arg Constructor", m_w, m_h);
  }
  Box::Box(int w, int h) {
    set(w, h);
    debug("two arg constructor", m_w, m_h);
  }
  void Box::set(int width, int height) {
    if (width > 0 && width < 70)
      m_w = width;
    else
      setEmpty();
    if (!isEmpty()) {
      if (height > 0 && height < 20)
        m_h = height;
      else
        setEmpty();
    }
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
    debug("box is gone!", m_w, m_h);
  }
}