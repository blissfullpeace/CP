#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int>a(n + 1), ans(n + 1);
  for(int i = 1; i <= n;++i){ 
    cin >> a[i];
    ans[a[i]] = i;
  }
  for(int i = 1; i <= n;++i)
    cout << ans[i] << ' ';
  puts("");
}
