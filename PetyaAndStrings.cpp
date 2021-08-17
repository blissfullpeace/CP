#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string a, b;
  cin >> a >> b;
  int ans = 0;
  for(int i = 0; i < a.size(); ++i){
    if(a[i] < 96)a[i]+=32;
    if(b[i] < 96)b[i]+=32;
    if(a[i] == b[i])continue;
    else if(a[i] > b[i]){
      ans+=1;
      break;
    }else{
      ans-=1;
      break;
    }
  }
  cout << ans << '\n';
}
