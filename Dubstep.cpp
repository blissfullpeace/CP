#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  string ans;
  bool ok = 0;
  for(int i = 0; i < s.size(); ++i){
    if(i + 3 <= s.size() && s.substr(i, 3) == "WUB"){
      i+=2, ok = 1;
      continue;
    }
    if(ok && ans.size())ans+=" ";
    ok = 0;
    ans+=s[i];
  }
  cout << ans << '\n';
}
