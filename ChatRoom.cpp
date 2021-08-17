#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  string match = "hello";
  int j = 0;
  for(int i = 0; i < s.size();++i){
    if(j == 5)break;
    if(s[i] == match[j])j++;
  }
  cout << (j == 5 ? "YES" : "NO") << '\n';
}
