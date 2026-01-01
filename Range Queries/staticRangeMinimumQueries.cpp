#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;

  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  int LOG = log2(n) + 1;
  vector<vector<int>> sparseTable(LOG,vector<int>(n));

  for(int i=0;i<n;i++){
    sparseTable[0][i] = arr[i];
  }

  for(int k=1; k<LOG; k++){
    for (int i = 0; i + (1 << k) <= n; i++) {
      sparseTable[k][i] = min(sparseTable[k-1][i],sparseTable[k-1][i + (1 << (k-1))]);
    }
  }

  while(q--){
    int l,r;
    cin >> l >> r;
    l--,r--;

    int len = r-l+1;
    int k = log2(len);
    
    cout << min(sparseTable[k][l],sparseTable[k][r - (1 << k) + 1]) << '\n';
  }
  return 0;
}
