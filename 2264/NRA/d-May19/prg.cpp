#include <iostream>
using namespace std;
int main() {
    cout << "OOP244 NRA - May 19" << endl;
    int size = 10;
    int* nums = new int[size];
    int cnt{};
    bool done = false;
    cout << "Enter the integers to print in reverse\n";
    if (nums == nullptr) {
        cerr << "Not enough memory!" << endl;
    }
    else {// memory allocation was successful
        int i{};
        char ch{};
        while (!done) {
            cout << (i + 1) << ": ";
            cin >> nums[i++];
            cout << "More?(Y/N<ENTER>)\n> ";
            cin >> ch;
            if (ch == 'N')  done = true;
            if (i == size) {
                int* newArr = new int[size + 10];
                for (int j = 0; j < size; j++) {
                    newArr[j] = nums[j];
                }
                delete[] nums;
                nums = newArr;
                size += 10;
            }
        }
        //write a reverse loop to print them
        cout << endl;
    }
    delete[] nums;
    return 0;
}