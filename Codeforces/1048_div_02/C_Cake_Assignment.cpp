/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-08                      _/ \_ 
*  File :      C_Cake_Assignment.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<int> respu(ll k, ll x){
    vector<int> ans;
    ll a=(1ULL<<(k+1)) - x;
    ll b=x;

    while(a!=b){
        if(a<b){
            ans.push_back(2);
            b-=a;
            a+=a;
        }
        if(a>b){
            ans.push_back(1);
            a-=b;
            b+=b;
        }
    }
    reverse(all(ans));
    return ans;
}

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<int> ans = respu(n, m);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
