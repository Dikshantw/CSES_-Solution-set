#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  map<char, int> counter;
  for(int i = 0; i<(int)s.size(); i++){ // this all loop can be for(char c: s) counter[c]++ because maps default missing keys to 0
    if(counter.find(s[i]) != counter.end()){
      counter[s[i]] += 1;
    }else {
      counter[s[i]] = 1;
    }
  }
  int oddCounter = 1;
  string left = "";
  string middle = "";
  for(auto p : counter){
    if(p.second % 2 != 0){
      oddCounter -= 1;
    }
    if(oddCounter < 0){
      cout << "NO SOLUTION" << '\n';
      return 0;
    }
    left += string(p.second / 2, p.first);
    if(p.second % 2 == 1 && middle == ""){
      middle = p.first;
    }
  }
  string right = left;
  reverse(right.begin(),right.end());
  cout << left + middle + right << '\n';

  return 0;
}
