/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-14                      _/ \_ 
*  File :      D_Divide_by_three_multiply_by_two.cpp
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
    vector<ll> arr(n);
    unordered_set<ll> nums;
    for (auto& x : arr) {
        cin >> x;
        nums.insert(x);
    }

    for (int i = 0; i < n; i++) {
        ll start = arr[i];
        vector<ll> path = {start};
        unordered_set<ll> used = {start};

        while (true) {
            ll next = -1;
            if (start % 3 == 0 && nums.count(start / 3) && !used.count(start / 3)) {
                next = start / 3;
            } else if (nums.count(start * 2) && !used.count(start * 2)) {
                next = start * 2;
            } else {
                break;
            }
            path.push_back(next);
            used.insert(next);
            start = next;
        }

        if (path.size() == n) {
            for (ll x : path) cout << x << " ";
            cout << endl;
            return;
        }
    }
}

int main() {
    fastio;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}