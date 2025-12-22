#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x;
  cin >> n;
  cin >> x;

  vector<int> weights;
  for(int i = 0; i<n; i++){
    int p;
    cin >> p;
    weights.push_back(p);
  }
  sort(weights.begin(),weights.end());
  
  int counter = 0;
  int i = 0, j = n-1;
  while(i<=j){
    if(weights[i] + weights[j] <= x){
      i++;
      j--;
    }else{
      j--;
    }
    counter++;
  }
  cout << counter << '\n';
  return 0;
}
