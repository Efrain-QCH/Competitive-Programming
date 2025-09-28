/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-28                      _/ \_ 
*  File :      Raab_Game_I.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,a=0,b=0;
    cin>>n>>a>>b;
    if (a+b>n ||(a && !b) || (!a && b)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    set<int> uno, dos;
    for(int i=1;i<=n;i++){
        uno.insert(i);
        dos.insert(i);
    } 
    for(int i=b+1;i<=a+b;i++){
        cout<<i<<" ";
        uno.erase(i);
    }
    for(auto i: uno){
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(auto i: dos){
        cout<<i<<" ";
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