#include <iostream>
using namespace std;
int main() {
    cout << "OOP244NAA - Jan21" << endl;
    int* arr = nullptr;
    int* size{};
    cout << "Please enter the number of values to be printed in reverse\n> ";
    cin >> *size;
    arr = new int[*size];
    for (int i = 0; i < *size; i++) {
       cout << (i + 1) << "> ";
       cin >> arr[i];
    }
    for (int i = *size - 1; i >= 0; i--) {
       cout << arr[i];
       if (i != 0) cout << ", ";
    }
    cout << endl;
    delete[] arr;
    delete size;
    return 0;
}