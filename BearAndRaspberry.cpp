#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, c;
  cin >> n >> c;
  vector<int>a(n);
  for(int i = 0; i < n;++i){
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n - 1;++i){
    ans = max(ans, a[i] - a[i + 1] - c);
  }
  cout << ans << '\n';
}
