#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arrived;
  vector<int> left;

  for(int i = 0; i<n; i++){
    int x,y;
    cin >> x >> y;
    arrived.push_back(x);
    left.push_back(y);
  }

  sort(arrived.begin(),arrived.end());
  sort(left.begin(),left.end());
  int i = 0, j = 0;
  int maxGuest = 0;
  int guest = 0;
  while(i<n && j<n){
    if(arrived[i] < left[j]){ // not = because leaving customers should be counted first otherwise overcount
      guest++;
      maxGuest = max(guest,maxGuest);
      i++;
    }else {
      guest--;
      j++;
    }
  }
  cout << maxGuest << '\n';
  return 0;
}
