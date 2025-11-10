/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-10                      _/ \_ 
*  File :      B_Siga_ta_Kymata.cpp
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    int n; 
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    string s; 
    cin >> s;

    if (s.front() == '1' || s.back() == '1') {
        cout << -1 << endl;
        return;
    }

    vector<int> izMin(n), izMax(n), derMin(n), derMax(n);
    izMin[0] = nums[0];
    izMax[0] = nums[0];
    for (int i = 1; i < n; i++) {
        izMin[i] = min(izMin[i - 1], nums[i]);
        izMax[i] = max(izMax[i - 1], nums[i]);
    }

    derMin[n - 1] = nums[n - 1];
    derMax[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        derMin[i] = min(derMin[i + 1], nums[i]);
        derMax[i] = max(derMax[i + 1], nums[i]);
    }

    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) pos[nums[i]] = i;

    vector<pair<int, int>> ans;
    int conta = 0;
    int l = 0, r = n;

    for (int i = 1; i + 1 < n; i++) {
        if (s[i] == '1') {
            conta++;
            int minAround = min(izMin[i - 1], derMin[i + 1]);
            int maxAround = max(izMax[i - 1], derMax[i + 1]);

            if (!(minAround < nums[i] && nums[i] < maxAround)) {
                cout << -1 << endl;
                return;
            }

            l = max(l, pos[minAround]);
            r = min(r, pos[maxAround]);

            if (s[i + 1] != '1') {
                ans.push_back({l + 1, r + 1});
                l = 0;
                r = n;
                conta = 0;
            }
        }
    }

    if (ans.empty()) {
        cout << 0 << endl;
        return;
    }
    if(ans.size()>5){
        cout<<-1<<endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto [a, b] : ans)
        cout << min(a,b) << " " << max(a,b) << endl;
}

int main() {
    fastio;
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
