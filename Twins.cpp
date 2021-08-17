#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int>a(n);
  for(int& i : a)cin >> i;
  sort(a.begin(), a.end());
  int othersum = accumulate(a.begin(), a.end(), 0);
  int cnt = 0, sum(0);
  for(int i = n - 1; i >= 0; --i){
    sum+=a[i];
    othersum-=a[i];
    cnt++;
    if(sum > othersum)break;
  }
  cout << cnt << '\n';
}
