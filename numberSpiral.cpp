#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  for(long long i = 1; i<= n; i++){
    long long y;
    cin >> y;
    long long x;
    cin >> x;

    long long k = max(y,x);
    if(k % 2 == 0){ //k*k is at (k*k, 1)
      long long newy = k - y;
      long long newx = x - 1;
      cout << (k*k) - (newy + newx) << '\n';
    }else { //k*k is at (1,k*k)
      long long newx = k - x;
      long long newy = y - 1;
      cout << (k*k) - (newy + newx) << '\n';
    }
  }
  return 0;
}
