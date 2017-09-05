#ifndef SICT_BOX_H__
#define SICT_BOX_H__
namespace sict {
   struct Box {
      char m_title[41];
      int m_height;
      int m_width;
   };
   void setBox( Box& B, const char title[], int height, int width);
   void displayBox(const  Box& B);
};


#endif
