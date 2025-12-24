#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,sum;
  cin >> n >> sum;
  
  vector<int> arr(n);
  for(int i =0; i<n; i++){
    cin >> arr[i];
  }
  map<int,int> comp;
  for(int i = 0; i<n;i++){
    int complement = sum - arr[i];
    auto it = comp.find(complement);
    if(it == comp.end()){
      comp.insert({arr[i],i+1});
    }else {
      cout << comp[complement] << " " << i+1 << '\n';
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << '\n';
  return 0;
}
