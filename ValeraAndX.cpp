#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  char a[n][n];
  char cmp2;
  for(int i = 0; i < n;++i)
    for(int j = 0; j < n;++j){
      cin >> a[i][j];
      if(i == j || j == n - i - 1)continue;
      else cmp2 = a[i][j];
    }
  if(cmp2 == a[0][0]){
    cout << "NO\n";
    return 0;
  }
  char cmp = a[0][0];
  bool ok = 0;
  for(int i = 1; i < n;++i)
    if(cmp == a[i][i])
      continue;
    else
      ok = 1;
  if(ok)
  {
    cout << "NO\n";
    return 0;
  }
  int cnt = 0;
  for(int i = n - 1; i >= 0;--i)
    if(cmp == a[cnt++][i])
      continue;
    else
      ok = 1;
  if(ok)
  {
    cout << "NO\n";
    return 0;
  }
  for(int i = 0; i < n;++i){
    for(int j = 0; j < n;++j){
      if(i == j || j == n - i - 1)continue;
      if(cmp2 == a[i][j])
        continue;
      else
      {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
}
