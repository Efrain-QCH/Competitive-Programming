#include <algorithm>
#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define debug(...)
#endif

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

const int MOD = 1000000007;
const int INF = 1e9;
const double PI = 3.14159265358979323846;

void solve() {
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cout<<1;
	}
	for(int i=m;i<n;i++){
		cout<<0;
	}
	cout<<endl;
    
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