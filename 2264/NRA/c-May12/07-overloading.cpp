
#include <iostream>
using namespace std;

void line(int len, char fill);
void line(int len);
void line(char fill);

int main() {
    line(30, '=');
    line(40);
    line('*');
    return 0;
}


void line(int len, char fill) {
    for (int i = 0;i < len;i++) {
        cout << fill;
    }
    cout << endl;
}
void line(int len) {
    line(len, '-');
}
void line(char fill) {
    line(70, fill);
}