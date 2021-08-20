#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>>a(n);
  for(int i = 0; i < n;++i)
    cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end());
  for(int i = 0; i < n;++i){
    if(s > a[i].first)
      s+=a[i].second;
    else
    {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
}
