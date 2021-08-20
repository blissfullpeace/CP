#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pair<int, int>>a, b, c;
  int num;
  for(int i = 0; i < n;++i){
    cin >> num;
    if(num == 1)a.push_back({num, i + 1});
    if(num == 2)b.push_back({num, i + 1});
    if(num == 3)c.push_back({num, i + 1});
  }
  if(min({a.size(), b.size(), c.size()}) == 0){
    cout << 0 << '\n';
    return 0;
  }
  cout << min({a.size(), b.size(), c.size()}) << '\n';
  for(int i = 0; i < min({a.size(), b.size(), c.size()});++i)
    cout << a[i].second << ' ' << b[i].second << ' ' << c[i].second << '\n';
}
