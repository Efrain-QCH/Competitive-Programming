/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-06                      _/ \_ 
*  File :      B_We_re_Competing.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    string ans="tamocompetindo";
    
    for(int i=0;i+ans.size()<=s.size();i++){

        int conta=0;
        for(int j=0;j<ans.size();j++){
            conta+=(ans[j]!=s[i+j]);
            //cout<<s[i+j]<<" ";
        }
        //cout<<endl;
        if(conta<=k){
            cout<<"SIM"<<endl;
            return;
        }

    }
    cout<<"NAO"<<endl;
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