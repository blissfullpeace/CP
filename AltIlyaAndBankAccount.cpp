#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  if(n >= 10)
  {
    cout << n << '\n';
    return 0;
  }
  cout << max({n, n/10, n % 10 + (n/100) * 10}) << '\n';
}
