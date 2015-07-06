#include <iostream>
using namespace std;
int getInt(){
  int num;
  bool done;
  do{
    done = true;
    cin >> num;
    if (cin.fail()){
      cin.clear();
      cin.ignore(2000, '\n');
      cout << "Could not read the int, please redo: ";
      done = false;
    }
    else if (cin.get() != '\n'){
      cout << "Only an intger please: ";
      cin.ignore(2000, '\n');
      done = false;
    }
  } while (!done);
  return num;
}
int main(){
  int number;
  cout << "Enter an integer: ";
  number = getInt();
  cout << "The number you entered is " << number << endl;
  cout << "Enter an integer: ";
  number = getInt();
  cout << "The number you entered is " << number << endl;
  cout << "Enter an integer: ";
  number = getInt();
  cout << "The number you entered is " << number << endl;
  return 0;
}