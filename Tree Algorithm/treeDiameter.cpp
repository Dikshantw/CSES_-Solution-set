#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
int maxDist;
int farthestNode;

void dfs(int node, int parent, int dist){
  if(dist > maxDist){
    maxDist = dist;
    farthestNode = node;
  }

  for(int child: adj[node]){
    if(child == parent) continue;
    dfs(child,node,dist + 1);
  }
}

int main(){
  int n;
  cin >> n;
  if(n == 1){
    cout << 0 << '\n';
    return 0;
  }
  adj.resize(n+1);

  for(int i=0; i<n; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  maxDist = -1;
  dfs(1,-1,0); //to find the farthest node from root
  
  maxDist = -1;
  dfs(farthestNode,-1,0); // to find the second farthest node
  
  cout << maxDist << '\n';
}
