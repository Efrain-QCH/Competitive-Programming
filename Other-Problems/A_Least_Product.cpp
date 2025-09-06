/**
*  Author :    zero_speed
*  Created :   2025-06-30
*  File :      A_Least_Product.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int nega=0,cero=0;
    int n;
    cin>>n;
    int pos_posi=-1;
    vector<ll> arr(n);
    for(ll& x: arr){
        cin>>x;
        nega+=(x<0);
        cero+=(x==0);
    }

    if(cero>0){
        cout<<0<<endl;
    }else{
        if(nega%2!=0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl<<"1 0"<<endl;
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