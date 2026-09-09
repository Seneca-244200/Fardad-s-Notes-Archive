#include <iostream>
using namespace std;
int main() {
    cout << "OOP244 NRA - May 19" << endl;
    int* nums{};
    int cnt{};
    cout << "How many integers to print in reverse?\n> ";
    cin >> cnt;
    nums = new int[cnt] {};
    if (nums == nullptr) {
        cerr << "Not enough memory!" << endl;
    }
    else {// memory allocation was successful
        for (int i = 0; i < cnt; i++) {
            cout << (i + 1) << ": ";
            cin >> nums[i];
        }
        for (int i = cnt - 1; i >= 0; i--) {
            cout << nums[i];
            if (i != 0) cout << ", ";
        }
        cout << endl;    
    }
    delete[] nums;
    nums = nullptr;
    return 0;
}