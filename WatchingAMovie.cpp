#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, x;
  cin >> n >> x;
  int l, r;
  int start = 1, watch = 0;
  for(int i = 0; i < n;++i){
    cin >> l >> r;
    while(start + x <= l)
      start+=x;
    watch+=r - start + 1;
    start = r + 1;
  }
  cout << watch << '\n';
}
