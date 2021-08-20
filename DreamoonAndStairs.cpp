#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  if( n < m )
    cout << -1 << '\n';
  else{
    for(int i = (n + 1)/2; i <= n;++i){
      if(i % m == 0){
        cout << i << '\n';
        return 0;
      }
    }
    cout << -1 << '\n';
  }
}
