#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  int aw(0), bw(0), dr(0);
  for(int i = 1; i <= 6;++i){
    if(abs(a - i) < abs(b - i))aw++;
    else if(abs(a - i) == abs(b - i))dr++;
    else bw++;
  }
  cout << aw << ' ' << dr << ' ' << bw << '\n';
}
