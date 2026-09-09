#include <iostream>
using namespace std;

void line(int len, char fill = '-'); // signature: line_int_char with default value for arguments
//void line(int len);   // signature: line_int
void line(char fill);
int main() {
    line(50, '*');
    line(40);
    line('=');
    return 0;
}
void line(char fill) {
    line(79, fill);
}
//void line(int len) {
//    line(len, '-');
//}
void line(int len, char fill) {
    for (int i = 0;i < len; i++) {
        cout << fill;
    }
    cout << endl;
}