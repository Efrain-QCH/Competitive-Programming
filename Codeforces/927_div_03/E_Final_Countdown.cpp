/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-04                      _/ \_ 
*  File :      E_Final_Countdown.cpp
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
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans(n+1, 0);
    for(int i=1; i<=n; i++){
        ans[i]+=ans[i-1]+(s[i-1]-'0');
    }
    for(int i=n;i>0; i--){
        ans[i-1]+=ans[i]/10;
        ans[i]%=10;
    }
    bool ok=0;
    for(int i=0; i<=n; i++){
        if(ans[i]!=0) ok=1;
        if(ok) cout<<ans[i];
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

/*
12345 
1234
123
12
1
1 3 6 10 15
        13715


*/