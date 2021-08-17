#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int sum[3] = {};
  while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    sum[0]+=a;
    sum[1]+=b;
    sum[2]+=c;
  }
  cout << (sum[0] == 0 && sum[1] == 0 && sum[2] == 0? "YES" : "NO") << '\n';
}
