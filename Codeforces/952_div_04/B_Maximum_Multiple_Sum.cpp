/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      B_Maximum_Multiple_Sum.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n;
    cin >> n;

    ll maximo = 0;
    int index = 0;

    for (int i = 2; i <= n; i++) {  
        ll suma = 0;
        for (int j = i; j <= n; j += i) {
            suma += j;  
        }
        if (suma > maximo) {
            maximo = suma;
            index = i;
        }
    }

    cout << index << endl;
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