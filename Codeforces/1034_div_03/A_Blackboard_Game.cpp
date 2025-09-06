#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec std::vector
#define pii std::pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes std::cout << "YES\n";
#define m1 std::cout << "-1\n";
#define no std::cout << "NO\n";

typedef int64_t ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vec<ll> counts(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val <= n) {
            counts[val]++;
        }
    }

    vec<ll> diff(n + 2, 0);

    for (int m = 0; m <= n; ++m) {
        ll min_k = counts[m];
        ll max_k = n - m;

        if (min_k <= max_k) {
            diff[min_k]++;
            if (max_k + 1 <= n) {
                diff[max_k + 1]--;
            }
        }

        if (counts[m] == 0) {
            break;
        }
    }

    ll cur_cnt = 0;
    for (int k = 0; k <= n; ++k) {
        cur_cnt += diff[k];
        cout << cur_cnt << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}