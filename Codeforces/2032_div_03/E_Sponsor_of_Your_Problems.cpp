/**
*  Author :    zero_speed
*  Created :   2025-06-19
*  File :      E_Sponsor_of_Your_Problems.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    string l, r;
    cin >> l >> r;

    int conta = 0;
    int index=0;
    if (l == r) {
        cout << 2 * l.size() <<endl;
        return;
    }
    
    while (index < l.size() && l[index] == r[index]){
        index++;
        conta++;
    } 
    if (l[index] + 1 < r[index]) {
        cout << 2 * conta << '\n';
    } else {
        int ans = 2*conta+1;
        for (int i = index + 1; i < l.size(); i++) {
            if (l[i] == '9' && r[i] == '0') ans++;
            else break;
        }
        cout << ans << '\n';
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