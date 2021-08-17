#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  if(min(n, m) & 1)
    cout << "Akshat\n";
  else
    cout << "Malvika\n";
}
