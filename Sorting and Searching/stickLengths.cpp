#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i<n;i++){
    cin >> arr[i];
  }
  sort(arr.begin(),arr.end());
  int middle = arr[n/2];
  long long counter = 0;
  for(int i=0;i<n;i++){
    if(arr[i] != middle){
      counter += abs(middle - arr[i]);
    }
  }
  cout << counter << '\n';
  return 0;
}
