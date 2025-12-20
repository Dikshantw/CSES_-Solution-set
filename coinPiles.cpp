#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  for(long long i = 1; i<=n; i++){
    long long x;
    cin >> x;
    long long y;
    cin >> y;
    long long maximum = max(x,y);
    long long minimum = min(x,y);
    if((x+y) % 3 == 0 && maximum <= 2*minimum){
      cout << "YES" << '\n';
    }else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
