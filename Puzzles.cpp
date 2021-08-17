#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<int>a(m);
  for(int& i : a)cin >> i;
  sort(a.begin(), a.end());
  int ans = 9999999;
  for(int i = 0; i <= m - n;++i){
    ans = min(ans, a[i + n - 1] - a[i]);
  }
  cout << ans << '\n';
}
