#include <iostream>
using namespace std;
int main() {
    cout << "OOP244 NAA - May20" << endl;
    int* nums{};
    int* cnt = new int;
    cout << "How many integers to print in reverse?\n> ";
    cin >> *cnt;

    nums = new int[*cnt] {};
    if (nums != nullptr) {
        for (int i = 0; i < *cnt; i++) {
            cout << (i + 1) << ": ";
            cin >> nums[i];
        }
        for (int i = *cnt - 1; i >= 0; i--) {
            cout << nums[i];
            if (i != 0) cout << ", ";
        }
        cout << endl;
    }
    else {
        cerr << "Not enough memory!" << endl;
    }
    delete[] nums;
    delete cnt;
    return 0;
}