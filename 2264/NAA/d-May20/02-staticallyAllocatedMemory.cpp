#include <iostream>
using namespace std;
int main() {
    cout << "OOP244 NAA - May20" << endl;
    int nums[1000]{};
    int cnt{};
    cout << "How many integers to print in reverse?\n> ";
    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        cout << (i + 1) << ": ";
        cin >> nums[i];
    }
    for (int i = cnt - 1; i >= 0; i--) {
        cout << nums[i];
        if (i != 0) cout << ", ";
    }
    cout << endl;

    return 0;
}