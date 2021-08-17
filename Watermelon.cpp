#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int w;
  cin >> w;
  cout << (w & 1 || w == 2? "NO" : "YES") << '\n';
}
