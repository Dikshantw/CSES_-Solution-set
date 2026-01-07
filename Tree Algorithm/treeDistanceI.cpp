//   TLE because of O(n*n);

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> ans;

void dfs(int node, int parent, int distance){
  ans[node] = distance;
  for(int child: adj[node]){
    if(child == parent) continue;
    dfs(child,node,distance + 1);
  }
}
int main(){
  int n;
  cin >> n;

  adj.resize(n+1);
  ans.resize(n+1);
  for(int i=0; i<n; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for(int i = 1; i<=n; i++){
    dfs(i,-1,0);

    int maxDist = 0;
    for(int j=1; j<=n; j++){
      maxDist = max(maxDist,ans[j]);
    }
    cout << maxDist << " ";
  }
  cout << "\n";
  return 0;
}
