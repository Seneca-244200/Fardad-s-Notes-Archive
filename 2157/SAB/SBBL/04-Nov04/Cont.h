#include <iostream>
//#define DEBUG
class Container{
  int _data;
public:
  Container();
  Container(int data);
  Container(const Container&C);
  ~Container();
  Container& operator=(const Container& C);
  Container operator+(int value)const;
  Container& operator+=(int value);
  std::ostream& display(std::ostream& os = std::cout)const;
  // istream& read(istream& is = std::cin); too lazy, so I use friend
  int data()const;
  Container& operator++();
  Container operator++(int);
  // I am doing this just because I want to teach
  // what friend can do, but it is BAAAAAAAAD
  // instead create an accessor for data that is const
  // and return the data and use that in the helper
  // function.
  friend Container operator-(const Container& C, int value);
  friend std::istream& operator>>(std::istream& is, Container& C);
};
Container operator-(const Container& C, int value);
int operator-(int value, const Container& C);

std::ostream& operator<<(std::ostream& os, const Container& C);
std::istream& operator>>(std::istream& is,Container& C);
