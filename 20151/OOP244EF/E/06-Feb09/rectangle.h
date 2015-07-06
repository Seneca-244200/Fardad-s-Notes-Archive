#ifndef __FS_RECTANGLE_H__
#define __FS_RECTANGLE_H__
namespace oop244e{
  class Rectangle{
  private:
    int
      _width,
      _height;
    char
      _fill;
    char*
      _title;
    void allocate(int size);
    void deallocate();
  public:
    Rectangle(int witdh, int height, 
              char fill = '*');
    Rectangle(int side);
    Rectangle();
    void set(int width, int height, 
              char fill = '*');
    void draw()const;
    void set(const char* title);
    void clear();
    ~Rectangle();
  };


}
#endif
