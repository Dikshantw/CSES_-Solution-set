#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> time(n);
  for (int i = 0; i < n; i++) {
    cin >> time[i].first >> time[i].second;
  }
  sort(time.begin(),time.end(),
      [](const pair<int,int>& a, pair<int,int>& b){
      return a.second < b.second;
      });
  int counter = 1;
  int lastEnd = time[0].second;
  for(int i =1; i<n;i++){
    if(lastEnd <= time[i].first){
      counter++;
      lastEnd = time[i].second;
    }
  }
  cout << counter << '\n';
  return 0;
}
