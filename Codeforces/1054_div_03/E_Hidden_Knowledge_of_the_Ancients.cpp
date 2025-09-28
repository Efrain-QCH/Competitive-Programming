/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-25                      _/ \_ 
*  File :      E_Hidden_Knowledge_of_the_Ancients.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,k,l_len,r_len;
    cin>>n>>k>>l_len>>r_len;
    vector<int> arr(n);
    for(int &x: arr) cin>>x;

    auto at_most = [&](int K)-> long long {
        if (K < 0) return 0;
        unordered_map<int,int> cnt;
        cnt.reserve(2*n);
        int distinct = 0;
        int L = 0;
        long long res = 0;
        for(int i=0;i<n;i++){
            int v = arr[i];
            if (++cnt[v] == 1) ++distinct;
            while(distinct > K){
                int u = arr[L++];
                if (--cnt[u] == 0) --distinct;
            }
            int low = max(L, i - r_len + 1);
            int high = min(i - l_len + 1, i);
            if (low <= high) res += (high - low + 1);
        }
        return res;
    };

    long long ans = at_most(k) - at_most(k-1);
    cout << ans << '\n';
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