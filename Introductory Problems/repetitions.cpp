#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  cin >> s;
  int current = 1;
  int ans = 1;
  for(int i=1; i < (int)s.size(); i++){
    if(s[i] == s[i-1]){
      current++;
    }else {
      current = 1;
    }
    ans = max(ans,current);
  } 
  
  cout << ans << '\n';
  return 0;
}
