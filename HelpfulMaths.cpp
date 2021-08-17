#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  string ans = "";
  for(int i = 0; i < s.size(); ++i){
    if(s[i] != '+')ans.push_back(s[i]);
  }
  sort(ans.begin(), ans.end());
  for(int i = 0; i < ans.size();++i){
    if(i == ans.size() - 1)cout << ans[i] << '\n';
    else cout << ans[i] << '+';
  }
}
