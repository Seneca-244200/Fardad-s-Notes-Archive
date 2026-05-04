#include <iostream>
using namespace std;


class Container {
   int m_value{};
public:
   int value() const {
      return m_value;
   }
   Container() = default;
   Container(int value) :m_value(value) {};

   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
   bool operator<(const Container& other) const {
      return m_value < other.value();
   }
   bool operator>(const Container& other) const {
      return m_value > other.value();
   }
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}



template <typename T> 
void swap(T* a, T* b) {
   T t = *a; // copy construction 
   *a = *b; // copy assignment
   *b = t;
}

template <typename type>
void bbl_sort(type arr[], size_t size, bool ascending = true) {
   for (size_t i = 0; i < size - 1; i++) {
      for (size_t j = 0; j < size - i - 1; j++) {
         if (ascending) {
            if (arr[j] > arr[j + 1]) { // type must support >
               swap(&arr[j], &arr[j + 1]);
            }
         }
         else {
            if (arr[j] < arr[j + 1]) { // type must support <
               swap(&arr[j], &arr[j + 1]);
            }
         }
      }
   }
}

template <typename type>
void prn_csv(type arr[], size_t size) {
   for (size_t i = 0; i < size; i++) {
      cout << arr[i];  // type must be insertable into ostream
      if (i != size - 1)  cout << ", ";
   }
   cout << endl;
}

int main() {
   double vals[] = { 10.1, 5.5, 20.3, 50.4, 1.1 };
   int ivals[] = { 10, 5.5, 20, 50, 1 };
   Container cvals[] = { 10, 5.5, 20, 50, 1 };
   bbl_sort(vals, 5);
   prn_csv(vals, 5);
   bbl_sort(vals, 5, false);
   prn_csv(vals, 5);
   bbl_sort(ivals, 5);
   prn_csv(ivals, 5);
   bbl_sort(cvals, 5);
   prn_csv(cvals, 5);
   return 0;
}