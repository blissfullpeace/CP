#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  for(char i : s){
    if(i < 96)i+=32;
    if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
      continue;
    cout << "." << i;
  }
}
