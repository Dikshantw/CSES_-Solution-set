#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  
  vector<long long> prefix(n);
  cin >> prefix[0];
  for(int i =1; i<n; i++){
    long long x;
    cin >> x;
    prefix[i] = prefix[i-1] + x;
  }
  for(int i=0;i<q;i++){
    int l,r;
    cin >> l >> r;
    if(l==1){
      cout << prefix[r-1] << '\n';
    }else{
      cout << prefix[r-1] - prefix[l-2] << '\n';
    }
  }
  return 0;
}
