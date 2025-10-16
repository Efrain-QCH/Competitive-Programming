/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-10                      _/ \_ 
*  File :      Number_Spiral.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    long long x, y;
    cin >> y >> x;
 
    long long maxi = max(x,y);
    long long square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0)
    {
      if (x > y)
      {
        cout << square + y << endl;
      }
      else
      {
        cout << (maxi * maxi) - x + 1 << endl;
      }
    }
    else
    {
      if (x > y)
      {
        cout << (maxi * maxi) - y + 1 << endl;
      }
      else
      {
        cout << square + x << endl;
      }
    }   
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
