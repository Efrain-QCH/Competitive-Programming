/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-13                      _/ \_ 
*  File :      E_Split.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n);
    map<int, int> frec;
    for(int i=0;i<n;i++){
        cin>>a[i];
        frec[a[i]]++;
    }
    if(n%m!=0){
        cout<<"0"<<endl;
        return;
    }
    for(auto [x,y]: frec){
        if(y%m!=0){
            cout<<"0"<<endl;
            return;
        }
    }

    int l=0;
    ll ans=0;
    map<int, int> conta;
    for(int r=0;r<n;r++){
        conta[a[r]]++;
        while(l<r && conta[a[r]]>frec[a[r]]/m){
            conta[a[l]]--;
            l++;
        }
        
        if(conta[a[r]]<=frec[a[r]]/m){
            ans+=r-l+1;
            continue;
        }
        
    }
    cout<<ans<<endl;
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