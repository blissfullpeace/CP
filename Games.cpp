#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int>a(n), b(n);
  for(int i = 0; i < n;++i)
    cin >> a[i] >> b[i];
  int ans(0);
  for(int i = 0; i < n;++i){
    for(int j = 0; j < n;++j){
      if(i != j && b[i] == a[j])
        ans++;
    }
  }
  cout << ans << '\n';
}
