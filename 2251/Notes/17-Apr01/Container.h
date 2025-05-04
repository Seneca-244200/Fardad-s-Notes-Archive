#ifndef SENECA_CONTAINER_H
#define SENECA_CONTAINER_H
#include <iostream>

namespace seneca {
   class Container {
      int m_data;
   public:
      Container(int data = 0);
      Container operator+(const Container& Ro)const;
      int volume() const;
      std::ostream& display(std::ostream& os)const;
   };
   std::ostream& operator<<( std::ostream& ostr, const Container& C );
}

#endif // !SENECA_CONTAINER_H

