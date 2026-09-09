// demo_bool.cpp
#include <iostream>
using namespace std;

int main() {
    int a[10]{ 1, 2, 3, 0, 2, 0,4,9,0,1 };
    int cnt = 0, nz = 0;
    for (int i = 0;i < 10;i++) {
        cnt += (a[i] == 0);
        nz += !!a[i];
    }


    return 0;
}