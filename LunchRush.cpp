#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>>a(n);
  for(int i = 0; i < n;++i)
    cin >> a[i].first >> a[i].second;
  ll ans = -1e12;
  for(int i = 0; i < n;++i){
    if(a[i].second > k)
      ans = max(ans, 1ll * (a[i].first - (a[i].second - k)));
    else
      ans = max(ans, 1ll * a[i].first);
  }
  cout << ans << '\n';
}
