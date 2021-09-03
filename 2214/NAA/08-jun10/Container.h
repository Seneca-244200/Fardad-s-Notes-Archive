#ifndef SDDS_CONTAINTER_H
#define SDDS_CONTAINTER_H

namespace sdds {
   class Container {
      char m_content[81];
      double m_value;
   public:
      Container();
      Container& set(const char* content, double value);
      // if void something()
      // make it Container& something() and return *this;
      const Container& print()const;
      Container sum(const Container& Ro)const;
      Container operator+(const Container& Ro)const;
      Container& set(double value);
      Container& operator=(double value);
      Container& operator=(const char* content);
      Container& operator+=(double value);
   };
}
//void print(const Container& C);// yucky!
#endif // !SDDS_CONTAINTER_H