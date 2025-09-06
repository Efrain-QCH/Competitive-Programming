/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-17                      _/ \_ 
*  File :      B_Alternating_Series.cpp
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
    if(n==2){
        cout<<"-1 2"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(i%2!=0 && i+1==n){
            cout<<2<<endl;
            return;
        }
        if(i%2==0) cout<<-1<<" ";
        else cout<<"3 ";
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
4 
-1 3 -1 2

*/