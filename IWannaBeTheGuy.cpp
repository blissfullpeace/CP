#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, p, q;
  cin >> n >> p;
  int a;
  set<int>st;
  for(int i = 0; i < p;++i){
    cin >> a;
    st.insert(a);  
  }
  cin >> q;
  for(int i = 0; i < q;++i){
    cin >> a;
    st.insert(a);  
  }
  cout << (st.size() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';
}
