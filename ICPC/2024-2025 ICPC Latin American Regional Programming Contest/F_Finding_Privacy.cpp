/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-27                      _/ \_ 
*  File :      F_Finding_Privacy.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,m;
    cin>>n>>m;
    if(3*n<m || n>(m+1)/2){
        cout<<'*'<<endl;
        return ;
    }

    for(int i=0;i<m;i++){
        if(m-i==n*3){
            cout<<"-X-";
            i+=2;
        }else{
            cout<<"X";
            i++;
            if(i<m){
                cout<<"-";
            }
        }
        n--;
    }
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