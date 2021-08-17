#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int arr[] = {4, 7, 47, 74, 444, 777, 477, 447, 774, 474, 747};
  for(int i : arr){
    if(n % i == 0)
    {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
