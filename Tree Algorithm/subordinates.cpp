#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> ans;

void dfs(int i){
  int count = 0;
  for(int child : adj[i]){
    dfs(child);
    count += ans[child] + 1;
  }
  ans[i] = count;
}

int main(){
  int n;
  cin >> n;
  adj.resize(n+1);
  ans.resize(n+1,0);
  for(int i=2; i<=n; i++){
    int u;
    cin >> u;
    adj[u].push_back(i);
  }
  dfs(1);

  for(int i=1; i<=n; i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
