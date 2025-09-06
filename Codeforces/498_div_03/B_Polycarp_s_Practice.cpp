/**
*  Author :    zero_speed
*  Created :   2025-07-02
*  File :      B_Polycarp_s_Practice.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, k;
	cin >> n >> k;
	vector<pair<int, int>> res(n);
	vector<int> a(n); 
	for (int i = 0; i < n; ++i) {
		cin >> res[i].first;
		a[i] = res[i].first;
		res[i].second = i + 1;
	}
	
	sort(res.begin(), res.end());
	reverse(res.begin(), res.end());
	sort(res.begin(), res.begin() + k, [&](pair<int, int> a, pair<int, int> b) { return a.second < b.second; });
	
	int lst = 0, sum = 0;
	for (int i = 0; i < k - 1; ++i) {
	    sum += *max_element(a.begin() + lst, a.begin() + res[i].second);
		lst = res[i].second;	
	}
	sum += *max_element(a.begin() + lst, a.end());
	cout << sum << endl;
	

	lst = 0;
	for (int i = 0; i < k - 1; ++i) {
		cout << res[i].second - lst << " ";
		lst = res[i].second;	
	}
	cout << n - lst << endl;
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