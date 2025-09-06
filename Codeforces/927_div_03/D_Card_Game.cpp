/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-04                      _/ \_ 
*  File :      D_Card_Game.cpp
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
    char c;
    cin>>c;
    n*=2;
    vector<string> ans;
    map<char, vector<string>> mp;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        mp[s[1]].push_back(s);
    }
    vector<string> res;
    int conta=0;
    for(auto [x,y]: mp){
        sort(all(y));
        if(x==c){
            //for(auto z: y) res.push_back(z);
            continue;
        }
        for(int i=0; i+1<y.size(); i+=2){
            ans.push_back(y[i]);
            ans.push_back(y[i+1]);
        }
        if(y.size()%2) {
            res.push_back(y.back());
            conta++;
        }
    }
    sort(all(mp[c]));   
    for(auto x : mp[c]){
        res.push_back(x);
    }
    if(conta*2>res.size()){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        for(int i=0;i+1<ans.size();i+=2){
            cout<<ans[i]<<" "<<ans[i+1]<<endl;
        }
        int l=0, r=res.size()-1;
        while(l<r){
            cout<<res[l]<<" "<<res[r]<<endl;
            l++;
            r--;
        }
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