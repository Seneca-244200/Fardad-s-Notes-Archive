#ifndef __FS_RECTANGLE_H__
#define __FS_RECTANGLE_H__
namespace oop244f{
  class Rectangle{
  private:
    int
      _width,
      _height;
    char*
      _title;
    char
      _fill;
    void allocate(int size);
    void deallocate();
  public:
    Rectangle(int witdh, int height,
      char fill = 'X');
    Rectangle(int side, char fill = 'X');
    Rectangle();
    void set(int witdh, int height,
             char fill = 'X');
    void set(char fill);
    void set(const char* title);
    void draw();
    void clear();
    ~Rectangle();
  };
}

#endif