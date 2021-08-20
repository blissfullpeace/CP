#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  long long l, r;
  cin >> l >> r;
  if((r - l <= 1) || ((l & 1) && r - l == 2))
  {
    cout << -1 << '\n';
    return 0;
  }
  if(l & 1)l++;
  cout << l << ' ' << l + 1 << ' ' << l + 2 << '\n';
}
