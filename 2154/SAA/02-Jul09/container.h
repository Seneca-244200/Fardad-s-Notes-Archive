#include <iostream>
#ifndef _244_CONTAINER_H_
#define _244_CONTAINER_H_

class Container{
   int* _data;
   int _size;
public:
   Container(int size = 10);
   Container(const Container& C);

   std::ostream& display(std::ostream& o);
   ~Container();
};

ostream& operator<<(ostream& os, Container& C);

#endif