/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      M_Prof_Dennis_Iván_Candia_Oviedo.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, caso = 1;
    while (cin >> n) {
        if( n == 0) break;
        vector<int> grupos(n);
        ll sum = 0;
        for (int i =0; i <n;++i) {
            cin >> grupos[i];
            sum += grupos[i];
        }
        int pila =sum/n;
        int ans =0;
        for (int x : grupos) {
            if (x>pila) {
                ans+=x - pila;
            }
        }
        cout <<"Set #"<<caso<<endl;
        cout <<"The minimum number of moves is "<<ans<<"."<< endl;
        cout <<endl;
        caso++;
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