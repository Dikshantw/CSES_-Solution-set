#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  long long ans = 0;
  long long max;
  cin >> max;

  for(int i = 1; i<n; i++){
    long long x;
    cin >> x;

    if(x < max){
      ans += max - x;
    }else {
      max = x;
    }
  }
  cout << ans << '\n';
  return 0;
}
