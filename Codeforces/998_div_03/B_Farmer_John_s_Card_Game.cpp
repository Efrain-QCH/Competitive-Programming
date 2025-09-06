/**
*  Author :    zero_speed
*  Created :   2025-07-02
*  File :      B_Farmer_John_s_Card_Game.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<vector<int>, int>> arr(n);
    for (int i = 0; i < n; i++) {
        vector<int> cards(m);
        for (int j = 0; j < m; j++) {
            cin >> cards[j];
        }
        sort(all(cards));
        arr[i] = {cards, i};
    }
    sort(all(arr));
    vector<int> order(n);
    for (int i = 0; i < n; i++) {
        order[i] = arr[i].second + 1; 
    }
    int top = -1;
    bool lost = false;

    vector<int> ptr(n, 0);

    for (int round = 0; round < m; round++) {
        for (int i = 0; i < n; i++) {
            int cow_idx = i; 
            int card = arr[cow_idx].first[round];
            if (card <= top) {
                lost = true;
                break;
            }
            top = card;
        }
        if (lost) break;
    }

    if (lost) {
        cout << "-1\n";
    } else {
        for (int x : order) cout << x << " ";
        cout << "\n";
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