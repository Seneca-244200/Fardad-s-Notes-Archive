#include <iostream>
#include <iomanip>
#include "Utils.h"
using namespace std;
using namespace sdds;

class Name {
   char* m_value{};
public:
   Name(const char* value = "") {
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


class Mark {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark(m_data + Ro.m_data);
   }
   bool operator<(const Mark& Ro)const {
      return m_data < Ro.m_data;
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Mark& c) {
   return c.display(os);
}

class Pop {
   int m_data;
public:
   Pop(int data = 0) :m_data(data) {
   }
   Pop operator+(const Pop& Ro)const {
      return Pop(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "P: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Pop& C) {
   return C.display(os);
}


class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   Container add(const Container& Ro)const {
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Cn: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


/*
The type must supprot binary operator +
The type must supprot copy construction
*/
template <typename type>
type sum(const type& a,const type& b) {
   return a + b;
}


// overloads have higher priority to templates
Container sum(const Container& a,const Container& b) {
   return a.add(b);
}

/*
Rule of three
*/

template <typename type>
void swap(type* a, type* b) {
   type temp = *a; // assign at the moment of creation is constructor (copy constructor)
   *a = *b;
   *b = temp;
}


/*
type should suppord operator< with another type

*/
template <typename type>
void sort(type arr[], int size) {
   int i{}, j{};
   for (i = 0; i < size; i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (arr[j] < arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
         }
      }
   }
}

/*
type should support insertion operaotor with cout
*/
template <typename type>
void prnArr(type a[], int size) {
   for (int i = 0; i < size; i++) {
      if (i != 0) cout << ", ";
      cout << a[i];
   }
   cout << endl;
}

//Name sum(Name a, Name b) {
//   return a + b;
//}

int main() {
   int a[] = { 1,4,3,6,87,9,6,4,6,8,3,2 };//12
   double d[] = { 1.1,3.3,5,5.2,2.7,7.6,6.4,4.3,1.3,2.3,4.5 }; //11
   Mark M[] = { 60,30,100,55,77,88,47,90 }; // 8
   Name N[] = { "Jack", "Adam", "David", "Rich", "Roger", "Nick", "Jill", "Jane"}; // 8
   sort(a, 12);
   prnArr(a, 12);
   sort(d, 11);
   prnArr(d, 11);
   sort(M, 8);
   prnArr(M, 8);
   Name two = sum(N[0], Name(" & ")); //sum(Name a=N[0], Name b=" & ")
   two = sum(two, N[6]);
   sort(N, 8);
   prnArr(N, 8);
   cout << two << endl;
   return 0;
}