/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-09                      _/ \_ 
*  File :      Palindrome_Reorder.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    string s;
    cin>>s;
    map<char, int> mapa;

    for(auto c: s) mapa[c]++;
    string ans="";
    string i="";
    for(auto [x,y]:mapa){
        if(y%2==1){
            if(i!="") {
                cout<<"NO SOLUTION"<<endl;
                return;
            }
            string h(y,x);
            i+=h;
            continue;
        }
        string h(y/2,x);
        ans+=h;
        
    }
    string aux=ans;
    reverse(all(aux));
    cout<<ans<<i<<aux<<endl;

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