#include <iostream>
#include <cstddef>
using namespace std;
// write a program that gets unknown number of marks and stops when a negative number is added
// then it will find the average of the marks and print it.
const size_t classSize{ 2 };

/// <summary>
/// calculates and prints the average of the marks
/// </summary>
/// <param name="marks">the marks array</param>
/// <param name="noOfMarks">number of marks in the array</param>
void average(const double* marks, size_t noOfMarks);
void resize(double*& marks,size_t& size, size_t newSize);
int main() {
    cout << "OOP244NAA - Jan21" << endl;
    size_t size{classSize};
    double* marks = new double[size];
    double mark{};
    size_t cnt{};
    cout << "Please enter the marks ending by entering a negative value" << endl;
    while (mark >= 0) {
       cout << (cnt + 1) << "> ";
       cin >> mark;
       if (cnt == size) {
          //resize the array 
          resize(marks, size, size + classSize);
       }
       if (mark >= 0) {
          marks[cnt++] = mark;
       }
    }
    // print the average
    average(marks, cnt);
    delete[] marks;
    return 0;
}

void average(const double* m, size_t cnt) {
   double sum{};
   for (size_t i = 0; i < cnt; i++) {
      sum += m[i];
   }
   cout << "The average is: " << sum / cnt << endl;
}

void resize(double*& marks, size_t& size, size_t newSize) {
   double* temp = new double[newSize];
   for (size_t i = 0; i < size && i < newSize; i++) {
      temp[i] = marks[i];
   }
   delete[] marks;
   size = newSize;
   marks = temp;
}
