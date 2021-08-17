#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int ans = 1e9;
  for(int i = 0; i <= n;++i){
    ans = min(ans, b * i + a * max(0, n - m * i));
    if(m * i > n)
      break;
  }
  cout << ans << '\n';
}
