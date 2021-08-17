#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int>a(n);
  for(int& i : a)cin >> i;
  int mi = 0, mxi = 0;
  for(int i = 1; i < n;++i){
    if(a[mi] >= a[i])mi = mi = i;
    if(a[mxi] < a[i])mxi = i;
  }
  int ans = mxi + n - 1 - mi;
  if(mxi > mi)ans--;
  cout << ans << '\n';
}
