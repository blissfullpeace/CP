#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int tmp = n;
  vector<int>a;
  while(tmp){
    int tmp1 = tmp % 10;
    tmp/=10;
    a.push_back(tmp1);
  }
  int cnt = 1, ans1 = 0, ans2 = 0;
  for(int i = 1; i < a.size();++i){
    ans1+=a[i] * cnt;
    cnt*=10;
  }
  cnt = 10;
  ans2+=a[0];
  for(int i = 2; i < a.size(); ++i){
    ans2+=a[i] * cnt;
    cnt*=10;
  }
  cout << max({n, ans1, ans2}) << '\n';
}
