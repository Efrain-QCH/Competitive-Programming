/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      E_Prof_Gerar_Francis_Quispe_Torres.cpp
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
    getline(cin,s);
    map<char, int> f;
    int maximo=0;
    for(auto c : s) {
        if(c != ' ') {
            f[tolower(c)]++;
            if(f[tolower(c)] > maximo) {
                maximo = f[tolower(c)];
            }
        }
    }
    vector<char> ans;
    for(auto [x,y] : f){
        if(y == maximo) {
            ans.push_back(x);
        }
    }
    sort(all(ans));
    for(auto c : ans) {
        cout << c;
    }
    cout<<endl;

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}
