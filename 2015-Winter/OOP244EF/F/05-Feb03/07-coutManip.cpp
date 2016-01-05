#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  /* integers */
  cout << "\n* ints *\n"
    << "1234567890\n"
    << "----------\n"
    << 4321 << '\n'
    << setw(7) << 4321 << '\n'
    << setw(7) << setfill('0') << 4321 << setfill(' ') << '\n'
    << setw(7) << left << 4321 << right << '\n';
  /* floats */
  cout << "\n* floats *\n"
    << "1234567890\n"
    << "----------\n"
    << 4321.9876546F << '\n';
  /* doubles */
  cout << "\n* doubles *\n"
    << "1234567890\n"
    << "----------\n"
    << fixed << 4.9876546 << '\n'
    << setw(7) << setprecision(3) << 4.9876546 << '\n'
    << setw(7) << setfill('0') << 4.9876546 << '\n'
    << setw(7) << left << 4.9876546 << right << '\n';
  /* characters */
  cout << "\n* chars *\n"
    << "1234567890\n"
    << "----------\n"
    << 'd' << '\n'
    << int('d') << '\n';
  return 0;
}