class Container {
   int m_volume;
   int m_capacity;
public:
   Container operator++(int);
   int operator+=(int volume);
   friend bool operator>(const Container& left, const Container& right);
};


Container Container::operator++(int) {
   Container temp = *this;
   if (m_volume < m_capacity) {
      m_volume += 1;
   }
   return temp;
}

int Container::operator+=(int volume) {
   if (m_volume < m_capacity - volume) {
      m_volume += volume;
   }
   return m_volume;
}


bool operator>(const Container& left, const Container& right) {
   return left.m_volume > right.m_volume;
}