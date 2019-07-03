#ifndef SICT_BOX_H__
#define SICT_BOX_H__
namespace sict {
  class Box {
    int m_w; // width
    int m_h; // height
  public:
    Box();
    Box(int side);
    Box(int w, int h);
    ~Box();
    bool isEmpty();
    void setEmpty();
    void set(int width, int height);
    void draw();
  };
}
#endif
