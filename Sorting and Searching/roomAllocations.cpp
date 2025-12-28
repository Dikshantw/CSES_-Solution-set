#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<array<int,3>> customers(n);
  for(int i=0;i<n;i++){
    cin >> customers[i][0] >> customers[i][1];
    customers[i][2] = i;
  }

  sort(customers.begin(),customers.end());

  priority_queue<
    pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
  
  vector<int> answers(n);
  int roomsUsed = 0;
  for(auto &c : customers){
    int start = c[0];
    int end = c[1];
    int idx = c[2];

    if(!pq.empty() && pq.top().first < start){ //reuse
	auto [oldEnd,room] = pq.top();
	pq.pop();
	answers[idx] = room;
	pq.push({end,room});
    }else { //new room
      roomsUsed++;
      answers[idx] = roomsUsed;
      pq.push({end,roomsUsed});
    }
  }
  cout << roomsUsed << '\n';
  for(int i=0; i<n; i++){
    cout << answers[i] << ' ';
  }
  cout << '\n';
  return 0;
}
