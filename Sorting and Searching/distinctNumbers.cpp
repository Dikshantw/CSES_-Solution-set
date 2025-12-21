#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  set<int> myset;
  for(long long i = 0; i<n; i++){
    long long x;
    cin >> x;
    myset.insert(x);
  }
  cout << myset.size() << '\n';
  return 0;
}
