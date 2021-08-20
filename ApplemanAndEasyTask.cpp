#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  char a[n][n];
  for(int i = 0; i < n;++i){
    for(int j = 0; j < n;++j){
      cin >> a[i][j];
    }
  }
  int cnt = 0;
  for(int i = 0; i < n;++i){
    for(int j = 0; j < n;++j){
      if(i && a[i - 1][j] == 'o')cnt++;
      if(j && a[i][j - 1] == 'o')cnt++;
      if(i < n - 1 && a[i + 1][j] == 'o')cnt++;
      if(j < n - 1 && a[i][j + 1] == 'o')cnt++;
      if(cnt & 1){
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
}
