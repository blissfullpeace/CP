#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n;++i){
    if(i & 1){
      for(int j = 1; j <= m;++j)
        cout << '#';
    }else if(i % 4 == 0){
      cout << '#';
      for(int j = 1; j < m;++j)
        cout << '.';
    }else{
      for(int j = 1; j < m;++j)
        cout << '.';
      cout << "#";
    }
    cout << '\n';
  }
}
