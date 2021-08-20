#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int>a(n);
  for(int& i : a)cin >> i;
  int mx = -1e8, mn = 1e8;
  for(int i = 1; i < n;++i)
    mx = max(mx, a[i] - a[i - 1]);
  for(int i = 1; i < n - 1;++i)
    mn = min(mn, a[i + 1] - a[i - 1]);
  cout << max(mx, mn) << '\n';
}
