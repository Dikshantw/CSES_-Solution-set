#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long t;
  cin >> n >> t;
  vector<long long> machines(n);
  for(int i =0; i<n;i++){
    cin >> machines[i];
  }
  long long low = 1;
  long long high = *min_element(machines.begin(),machines.end()) * t;
  while(low < high){
    long long mid = (low + high) / 2;
    long long totalItems = 0;
    for(int i=0; i<n;i++){
      totalItems += mid/machines[i];
    }
    if(totalItems < t){
      low = mid + 1;
    }else{
      high = mid;
    }
  }
  cout << low << '\n';
  return 0;
}
