#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long currSum, maxSum;
  cin >> currSum;
  maxSum = currSum;
  for(int i=1; i<n; i++){
    long long x;
    cin >> x;
    currSum = max(x,currSum + x); //is it better to start subarry at x or extend the subarray
    maxSum = max(maxSum,currSum);
  }
  cout << maxSum << '\n';
  return 0;
}
