//max distance of any two node = max(dist(node,A),dist(node,B));
//where A,B are two endpoint of the diameter in tree.
// O(n)
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> distA;
vector<int> distB;

void dfs(int node,int parent, vector<int>& dist, int d){
  dist[node] = d;

  for(int child: adj[node]){
    if(child == parent) continue;
    dfs(child,node,dist,d+1);
  }
}

int main(){
  int n;
  cin >> n;
  if(n==1){
    cout << 0 << '\n';
    return 0;
  }
  adj.resize(n+1);
  distA.resize(n+1);
  distB.resize(n+1);
  for(int i=0; i<n; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  dfs(1,-1,distA,0); //Find A
  int A = 1;
  for(int i=1;i<=n;i++){
    if(distA[i] > distA[A]) A = i;
  }

  dfs(A,-1,distA,0); //distances from A to each node
  int B = A;
  for(int i=1; i<=n; i++){
    if(distA[i] > distA[B]) B = i;
  }

  dfs(B,-1,distB,0); //distances from B to each node
  
  for(int i = 1; i<=n; i++){
    cout << max(distA[i],distB[i]) << " ";
  }
  cout << "\n";
  return 0;
}
