#ifndef SDDS_BOX_H__
#define SDDS_BOX_H__
namespace sdds {
   class Box {
      int m_height;
      int m_width;
   public:
      Box();
      Box(int side);
      void set(int height, int width);
      void draw()const;
      void setEmpty();
      bool isEmpty()const;
   };
}



#endif