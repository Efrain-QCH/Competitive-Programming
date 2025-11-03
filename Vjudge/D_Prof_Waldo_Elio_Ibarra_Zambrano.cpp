/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      D_Prof_Waldo_Elio_Ibarra_Zambrano.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve(int caso) {
    cout<<"Case "<< caso << ": ";
    string a,b;
    cin>>a>>b;
    int a0 = 0;
    int a1 = 0; 
    int b0 = 0; 
    int b1 = 0; 
    int aux=0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i]=='1' && b[i]=='0'){
            a0++;
        }else if(a[i]=='0' && b[i]=='1'){
            a1++;
        }else if(a[i]=='?' && b[i]=='0'){
            b0++;
        }else if(a[i]=='?' && b[i]=='1'){
            b1++;
        }
    }
    int ans=0;
    if (a0> a1) {
        int x=0, y=0;
        for(char c : a) x+=(c == '1');
        for(char c : b) y+=(c == '1') ;
        if (x>y){
            cout <<-1<< endl;
            return;
        }
    }
    int cambio = min(a0, a1);
    int uno = a1 - cambio;
    int dos = b0 + b1;
    ans=uno+dos+a0;
    cout <<ans<< endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++) {
        solve(i);
    }
    return 0;
}