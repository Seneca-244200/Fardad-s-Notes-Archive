#include <iostream>
using namespace std;

// 1. Show a single integer
void show(int value) {
    cout << "[int]    " << value << endl;
}

// 2. Show a double
void show(double value) {
    cout << "[double] " << value << endl;
}

// 3. Show a C-string (null-terminated char array / pointer)
void show(const char* message) {
    cout << "[C-string] " << message << endl;
}

// 4. Show an array of integers
void show(const int arr[], int size) {
    cout << "[array]  ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    show(42);
    show(3.14159);
    show("Welcome to OOP!");

    int scores[] = { 87, 92, 78, 95 };
    show(scores, 4);

    return 0;
}