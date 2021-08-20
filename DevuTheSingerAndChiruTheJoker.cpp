#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  int sum(0);
  vector<int>a(n);
  for(int i = 0; i < n;++i){
    cin >> a[i];
    sum+=a[i];
  }
  if(sum + (n - 1) * 10 > m)
  {
    cout << -1 << '\n';
    return 0;
  }
  cout << (m - sum)/5 << '\n';
}
