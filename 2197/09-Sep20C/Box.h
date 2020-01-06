#ifndef SDDS_BOX_H__
#define SDDS_BOX_H__
namespace sdds {
   struct Box {
   private:
      int m_width;
      int m_height;
      void hrline()const;
      void sides()const;
   public:
      ~Box();
      Box();
      Box(int side);
      Box(int width, int height);
      void set(int width, int height);
      void draw()const;
      void setEmpty();
      bool isEmpty()const;
   };
}
#endif