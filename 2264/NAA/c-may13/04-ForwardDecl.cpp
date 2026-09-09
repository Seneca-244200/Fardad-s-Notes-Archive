#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};
struct Line;// forward declration
void draw(const Line* l);
struct Line {
    Point beg, end;
};



int main() {
    Point origin{ 0, 0 };
    Point p{ 10, 25 };

    cout << "Origin: (" << origin.x << ", " << origin.y << ")" << endl;
    cout << "Point p: (" << p.x << ", " << p.y << ")" << endl;

    // In C++ we do NOT need the 'struct' keyword when declaring variables
    Point another;          // Legal
    another.x = 7;
    another.y = 14;

    return 0;
}