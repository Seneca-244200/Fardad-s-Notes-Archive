#pragma once
#ifndef SENECA_FRAME_H
#define SENECA_FRAME_H
namespace seneca {
   class Frame {
      int m_width;
      int m_height;
      char m_fill;
      bool m_ok;
   public:
      Frame();// default constructor (no arg)
      Frame(int width, int height);
      void set( int width, 
         int height, char fill);
      bool set(char fill);
      void draw()const;// can't change the owner
      bool isValid()const;
   };


}
#endif // !SENECA_FRAME_H

