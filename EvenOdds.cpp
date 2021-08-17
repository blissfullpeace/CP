#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  ll n, k;
  cin >> n >> k;
  if(k * 2 <= n + 1)
    cout << 2 * k - 1 << '\n';
  else
    cout << 2 * (k - (n + 1)/2)<< '\n';
}
