#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s;
  getline(cin, s);
  bool chk[26] = {};
  for(int i = 1; i < s.size() - 1;++i){
    if(s[i] >= 'a' && s[i] <= 'z')
      chk[s[i] - 'a'] = 1;
  }
  cout << accumulate(chk, chk + 26, 0) << '\n';
}
