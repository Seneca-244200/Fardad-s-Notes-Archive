#include <iostream>
using namespace std;
int main(){
  int n;
  int i; //counter
  double* dp = nullptr;
  double av = 0;
  cout << "Please enter the number of double values: ";
  cin >> n;
  dp = new double[n];
 // if (dp != nullptr){
 //   if (dp != (double*)0){
  if (dp){
    cout << "Please enter the doubles: ";
    for (i = 0; i < n; i++){
      cout << (i + 1) << ": ";
      cin >> dp[i];
    }
    for (i = 0; i < n; i++){
      cout << dp[i] << " ";
      av += dp[i];
    }
    cout << "Av: " << av / n << endl;
    delete[] dp;
    dp = nullptr;
  }
  else{
    cout << "Not enough memory!" << endl;
  }
  return 0;
}
