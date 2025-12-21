#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,m,k;
  cin >> n;
  cin >> m;
  cin >> k;
  vector<int> applicantDesiredSize;
  for(long long i=0; i<n; i++){
    int x;
    cin >> x;
    applicantDesiredSize.push_back(x);
  }

  vector<int> apartmentSize;
  for(long long i=0; i<m; i++){
    int y;
    cin >> y;
    apartmentSize.push_back(y);
  }
  sort(applicantDesiredSize.begin(),applicantDesiredSize.end());
  sort(apartmentSize.begin(),apartmentSize.end());
  
  long long i = 0, j = 0;
  long long counter = 0;
  while(i<n && j < m){
    if(apartmentSize[j] < applicantDesiredSize[i] - k){
      j++; // apartment size is very small 
    }else if(apartmentSize[j] > applicantDesiredSize[i] + k){
      i++; // apartment Size is very big
    }else {
      counter++;
      i++;
      j++;
    }
  }
  cout << counter << '\n';
  return 0;
}
