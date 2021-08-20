#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, k;
  cin >> n >> k;
  int cnt(0);
  int num;
  for(int i = 0; i < n;++i){
    cin >> num;
    if(num + k <= 5)
      cnt++;
  }
  cout << cnt/3 << '\n';
}
