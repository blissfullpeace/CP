#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, v;
  cin >> n >> v;
  vector<int>ans;
  for(int i = 0; i < n;++i){
    int num;
    cin >> num;
    bool ok = 1;
    for(int j = 0; j < num;++j){
      int p;
      cin >> p;
      if(ok)
        if(v > p){
          ans.push_back(i + 1);
          ok = 0;
        }
    }
  }
  cout << ans.size() << '\n';
  if(ans.size() > 0)
    for(int i : ans)
      cout << i << ' ';
  puts("");
}
