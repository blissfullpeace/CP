#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  if(n & 1){
    cout << -1 << '\n';
    return 0;
  }
  vector<int>a(n);
  iota(a.begin(), a.end(), 1);
  for(int i = 0; i < n;i+=2){
    swap(a[i], a[i + 1]);
  }
  for(int i : a)
    cout << i << ' ';
  puts("");
}
