
#include <iostream>
using namespace std;

void line(int len=40, char fill = '-');
void line(char fill);

int main() {
    line(30, '=');
    line(60);
    line('*');
    line();
    return 0;
}


void line(int len, char fill) {
    for (int i = 0;i < len;i++) {
        cout << fill;
    }
    cout << endl;
}

void line(char fill) {
    line(70, fill);
}