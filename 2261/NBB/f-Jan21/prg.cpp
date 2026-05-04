#include <iostream>
using namespace std;
// this progrm is to recieve uknown number of marks from the user
// and then calculate the average of those marks
#include <cstddef> // for size_t

/// <summary>
/// Computes the average of an array of marks.
/// </summary>
/// <param name="marks">Pointer to the first element of an array of double values representing the marks.</param>
/// <param name="numberOfMarks">The number of elements in the marks array.</param>
void average(const double marks[], size_t numberOfMarks);

void resizeArray(double*& arrayToResize, size_t& originalSize, size_t newSize);

int main() {
   size_t size = 10, cnt{};
   double* marks = nullptr; // is set to have a dynamic array later
   //double* marks{}; // same as above
   marks = new double[size]; // dynamic memory allocation
   double mark{};
   cout << "Enter marks one by one, and enter a negative number to stop:\n";
   while (mark >= 0) {
      cout << (cnt+1) << " > ";
      cin >> mark;
      if (mark >= 0) {
         if (cnt == size) {
            // expand the array
            resizeArray(marks, size, size + 10);
         }
         marks[cnt++] = mark;
      }
   }
   // find and display the average
   average(marks, cnt);
   delete[] marks;
   return 0;
}


void average(const double marks[], size_t cnt) {
   double avg{}, sum{};
   for (size_t i = 0; i < cnt; i++) {
      sum += marks[i];
   }
   avg = sum / cnt;
   cout << "The average is: " << avg << endl;
}


void resizeArray(double*& arr, size_t& sz, size_t newSize) {
   double* newArr = new double[newSize];
   for (size_t i = 0; i < sz && newSize; i++) {
      newArr[i] = arr[i];
   }
   delete[] arr;
   arr = newArr;
   sz = newSize;
}

