/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-07                      _/ \_ 
*  File :      D_Replace_with_Occurrences.cpp
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
    vector<int>v(n);
    map<int,int>mp;
    map<int, int> mostrar;
    set<int> s;
    for (int i = 1; i <= n; i++) s.insert(i);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
        mp[x]++;
        if(mp[x]==x){
            mp[x]=0;
        }
    }
    for(auto [x,y]: mp){
        mostrar[x]= *s.begin();
        int aux=*s.begin();
        s.erase(aux);
        if(y!=0){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        cout<<mostrar[v[i]]<<" ";
        mp[v[i]]++;
        if(mp[v[i]]==v[i]){
            mp[v[i]]=0;
            mostrar[v[i]]=*s.begin();
            int aux=*s.begin();
            s.erase(aux);
        }
        
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