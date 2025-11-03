/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-27                      _/ \_ 
*  File :      E_Evereth_Expedition.cpp
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
    vector<int> arr(n), aux;
    set<int> nums;
    for(int i=1;i<=n;i++) nums.insert(i);
    pair<int, int> maximo;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
        if(x!=0) {
            aux.push_back(x);
            nums.erase(x);
        }
        if(x>maximo.first){
            maximo={x,i};
        }
        
    }
    bool uno=0, dos=0, tres=0;
    int cima=0;
    for(int i=0;i+1<aux.size();i++){
        if(aux.size()>2 && i!=0 && aux[i]>aux[i+1] && aux[i]>aux[i-1]){
            cima=aux[i];
        }
        if(aux[i]<aux[i+1]){
            if(dos){
                cout<<"*"<<endl;
                return;
            }
            uno=1;
        }
        if(aux[i]>aux[i+1]){
            dos=1;
        }
        
    }
    if(uno && dos) tres=1;
    if(tres){
        for()
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