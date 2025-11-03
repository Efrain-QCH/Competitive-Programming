/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      H_Prof_Robert_Wilbert_Alzamora_Paredes.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n;
}

vector<ll> cub(){
    vector<ll> res;
    for(ll i=1;i*i*i<=1e6;i++){
        res.push_back(i*i*i);
    }
    return res;
}

vector<ll> piramide(){
    vector<ll> res;
    ll suma=0;
    for(int i=1;;i++){
        suma+=i*i;
        if(suma>1e6) break;
        res.push_back(suma);
    }
    return res;
}

int main() {
    fastio;
    ll n;
    vector<ll> cubos=cub();
    vector<ll> pira=piramide();

    vector<ll> dp(400001);
    iota(all(dp), 0);
    dp[0] = 0; 
    for(auto x : pira){
        if(x <= 400000) dp[x]=1;
    }
    for(auto x : cubos){
        if(x <= 400000) dp[x]=1;
    }
    for(int i=1;i<=400000;i++){
        for(auto x : pira){
            if(i-x>=0){
                dp[i]=min(dp[i], dp[i-x]+1);
            }
        }
        for(auto x : cubos){
            if(i-x>=0){
                dp[i]=min(dp[i], dp[i-x]+1);
            }
        }
    }
    while(cin>>n){
        if(n==-1) break;
        cout<<dp[n]<<endl;
    }
    
    //  dp al fallo papa, XD
    return 0;
}
