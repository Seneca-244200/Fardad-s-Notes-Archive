#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void selectSort(int* a, int n)
{
   int i, j, m;
   int temp;
   for (i = 0; i < n; i++) {
      m = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[m]) {
            m = j;
         }
      if (m != i) {
         temp = a[i];
         a[i] = a[m];
         a[m] = temp;
      }
   }
}
int main() {
   int num;
   int* i;
   int* numbers = nullptr;
   i = new int;
   cout << "please enter number of integers to be sorted: ";
   cin >> num;
   numbers = new int[num];
   cout << "Please enter the values: " << endl;
   for (*i = 0; *i < num; (*i)++) {
      cout << (*i + 1) << ": ";
      cin >> numbers[*i];
   }
   selectSort(numbers, num);
   cout << "The sored numbers are: " << endl;
   //for (i[0] = 0; i[0] < num; i[0]++) {
   //   cout << numbers[i[0]] << " ";
   //}
   for (*i= 0; *i < num; (*i)++) {
      cout << numbers[*i] << " ";
   }
   cout << endl;
   delete i;
   delete[] numbers;
   //numbers = nullptr;
   //delete[] numbers;
   return 0;
}