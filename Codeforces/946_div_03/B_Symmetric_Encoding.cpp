/**
*  Author :    zero_speed
*  Created :   2025-06-27
*  File :      B_Symmetric_Encoding.cpp
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
    set<char> aux;
    map<char, char>mapa;
    for(int i=0;i<n;i++){
        aux.insert(s[i]);
    }
    vector<char> aux2;
    for(auto c: aux){
        aux2.push_back(c);
    }
    int l=aux2.size();
    for(int i=0;i<(l+1)/2;i++){
        mapa[aux2[i]]=aux2[l-1-i];
        mapa[aux2[l-1-i]]=aux2[i];
    }
    for(auto c: s){
        cout<<mapa[c];
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