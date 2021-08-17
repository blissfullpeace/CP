#include <bits/stdc++.h>
using namespace std;

bool ok(int x, int y, int x1, int y1, int dist){
  return ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) == dist);
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  if(ok(x1 + dist, y1, x2 + dist, y2, dist)){
    cout << x1 + dist << ' ' << y1 << ' ' << x2 + dist << ' ' << y2 << '\n';
    return 0;
  }
  if(ok(x1, y1 + dist, x2, y2 + dist, dist)){
    cout << x1 << ' ' << y1 + dist << ' ' << x2 << ' ' << y2 + dist << '\n';
    return 0;
  }
  cout << -1 << '\n';
}
