// demo_bool.cpp
#include <iostream>
using namespace std;

int main() {
    bool isEnrolled = true;
    bool hasPaid = false;
    int score = 87;

    cout << "isEnrolled (true)  prints as: " << isEnrolled << endl;
    cout << "hasPaid   (false) prints as: " << hasPaid << endl;

    // The double-not trick – normalizes any value to 0 or 1
    cout << "!!score (score = 87) = " << !!score << endl;   // 1

    // Implicit conversion in conditions
    if (score) {
        cout << "score is considered TRUE" << endl;
    }
    
    bool result = (score > 90);   // comparison produces bool
    cout << "result of (score > 90): " << result << endl;

    return 0;
}