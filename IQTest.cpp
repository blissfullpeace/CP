#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int a;
  vector<int>v, v1;
  for(int i = 0; i < n;++i){
    cin >> a;
    if(a & 1)
      v.push_back(i + 1);
    else
      v1.push_back(i + 1);
  }
  if(v.size() < v1.size())
    cout << v[0] << '\n';
  else
    cout << v1[0] << '\n';
}
