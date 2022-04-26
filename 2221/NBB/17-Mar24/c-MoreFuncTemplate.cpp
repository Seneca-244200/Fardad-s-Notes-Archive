#include <iostream>
#include <string>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Mark {
   int m_data;
public:
   Mark(int data = 0) :m_data{ data } {
   }
   Mark operator+(const Mark& Ro) {
      return Mark(m_data + Ro.m_data);
   }
   bool operator<(const Mark& Ro) {
      return m_data < Ro.m_data;
   }
   ostream& display(ostream& os)const {
      return os << "M: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}


class Name {
   char* m_value{};
public:
   Name(const char* value="") {
      m_value = ut.alcpy(value);
   }
   Name(const Name& N) {
      operator=(N);
   }
   Name& operator=(const Name& N) {
      if (this != &N) {
         delete[] m_value;
         m_value = ut.alcpy(N.m_value);
      }
      return *this;
   }
   virtual ~Name() {
      delete[] m_value;
   }
   Name operator+(const Name& Ro)const {
      char* temp = new char[ut.strlen(m_value) + ut.strlen(Ro.m_value) + 1];
      ut.strcpy(temp, m_value);
      ut.strcat(temp, Ro.m_value);
      Name ret(temp);
      delete[] temp;
      return ret;
   }
   bool operator<(const Name& ro) {
      return ut.strcmp(m_value, ro.m_value) < 0;
   }
   ostream& display(ostream& ostr = cout)const {
      return ostr << m_value;
   }

};
ostream& operator<<(ostream& ostr, const Name& N) {
   return N.display(ostr);
}

class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   Container operator+(const Container& Ro) {
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "C: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}

class Pop {
   int m_data;
public:
   Pop(int data = 0) :m_data(data) {
   }
   Pop operator+(const Pop& Ro) {
      return Pop(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "P: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Pop& C) {
   return C.display(os);
}

/*
 copying 
 opertor+(type, type)

*/
// at compile
template <typename Type>
Type sum(Type a, Type b) {
   return a + b;
}

/*
 type must be copyable
 type must be assignable to another type.

*/
template <typename type>
void swap(type* a, type* b) {
   type temp = *a; // assignment at the moment of createion is constructor (Copy constructor
   *a = *b;
   *b = temp;
}

/*
T must work with Operator <
*/
template <typename T>
void sort(T arr[], int n) {
   int i{}, j{};
   for (i = 0; i < n; i++) {
      for (j = 0; j < n - i - 1; j++) {
         if (arr[j] < arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
         }
      }
   }
}

/*
abc type must have insertion operator handled
*/

template <typename abc>
void prnArr(abc arr[], int n) {
   for (int i = 0; i < n; i++) {
      if (i != 0) cout << ',';
      cout << arr[i];
   }
   cout << endl;
}


int main() {
   Name A("Fred"), B("Soley"), C;
   int a[] = { 1,4,2,7,4,8,6 };
   double d[] = {1.1,3.3,5,5.2,2.7,7.6,6.4,4.3,1.3,2.3,4.5};
   Mark M[] = { 60,30,100,55,77,88,47,90 };
   Name N[] = { "Joe", "Jack", "Jill" };
   sort(a, 7);
   prnArr(a, 7);
   sort(d, 11);
   prnArr(d, 11);
   sort(M, 8);
   prnArr(M, 8);
   sort(N, 3);
   prnArr(N, 3);
   C = sum(A, B);
   cout << C << endl; 
   return 0;
}