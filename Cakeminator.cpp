#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  char a[n][m];
  bool r[100], c[100];
  memset(r, 1, sizeof r);
  memset(c, 1, sizeof c);
  for(int i = 0; i < n;++i)
    for(int j = 0; j < m;++j){
      cin >> a[i][j];
      if(a[i][j] == 'S'){
        r[i] = 0;
        c[j] = 0;
      }
    }
  int ans = 0;
  for(int i = 0; i < n;++i)
    for(int j = 0; j < m;++j)
      if(r[i] || c[j])
        ans++;
  cout << ans << '\n';
}
