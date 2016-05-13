// write a program (A single main the compile and runs) 
// that receives several characters and prints them in reverse order.

#include <iostream>
using namespace std;
int main(){
  int n;
  int i;
  double sum = 0.0;
  cout << "Please enter the number of double values: ";
  cin >> n;
  double* dp = new double[n];
//  if (dp !=(double*)0)  
//  if (dp!= nullptr)
  if (dp){
    cout << "Thanks, now start entring doubles: " << endl;
    for (i = 0; i < n; i++){
      cout << (i + 1) << ": ";
      cin >> dp[i];
      // cin >> *(dp + i);
    }
    for (i = 0; i < n; i++){
      cout << dp[i] << " ";
      sum += dp[i];
    }
    cout << endl << "Av: " << sum / n << endl;
    delete[] dp;
    dp = nullptr;
  }
  else{
    cout << "Memory allocation failed!" << endl;
  }
  return 0;
}