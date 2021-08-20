#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int a[3] = {};
  int num;
  for(int i = 0; i < n;++i){
    cin >> num;
    a[i % 3]+=num;
  }
  int mx = -1e8, ans;
  for(int i = 0; i < 3;++i)
  {
    if(mx < a[i]){
      mx = a[i];
      ans = i;
    }
  }
  if(!ans)
    cout << "chest";
  else if(ans == 1)
    cout << "biceps";
  else
    cout << "back";
  puts("");
}
