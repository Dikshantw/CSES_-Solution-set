#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  for(long long i = 1; i<=n; i++){
    long long base = i*i;
    long long dh = i - 2 + 1;
    long long dw = i - 3 + 1;
    long long totalRectangles = 2 * (dh * dw); // total 2x3 rectangle that fit into ixi square
    long long invalidPlaces = 2 * totalRectangles;// each 2x3 rectangle have 2 invalid places
    long long totalPlaces = (base * (base - 1)) / 2; //combination formula n!/k!*(n-k)!
    long long ans = totalPlaces - invalidPlaces;
    cout << ans << '\n';
  }
  return 0;
}
