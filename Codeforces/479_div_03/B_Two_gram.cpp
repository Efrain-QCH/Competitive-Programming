/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-13                      _/ \_ 
*  File :      B_Two_gram.cpp
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
    map<string, int> ans;
    
    int res=0;
    string lo="";
    for(int i=1;i<n;i++){
        string aux="";
        aux += s[i - 1];
        aux += s[i];
        ans[aux]++;
        //cout<<aux<<" ";
        if(ans[aux]>res){
            res=ans[aux];
            lo=aux;
        }
    }
    cout<<lo;
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