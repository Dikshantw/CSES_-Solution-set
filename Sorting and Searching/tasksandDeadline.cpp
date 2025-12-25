#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> arr(n);
  for(int i=0;i<n;i++){
    cin >> arr[i].first >> arr[i].second;
  }
  sort(arr.begin(),arr.end());

  long long reward = 0;
  long long time = 0;
  for(int i=0;i<n;i++){
    time += arr[i].first;
    reward += arr[i].second - time;
  }
  cout << reward << '\n';
  return 0;
}
