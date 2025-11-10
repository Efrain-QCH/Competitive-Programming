/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-10                      _/ \_ 
*  File :      C_Monopati.cpp
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
    vector<vector<int>> nums(2, vector<int> (n));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;i++){
            cin>>nums[i][j];
        }
    }

    vector<vector<int>> minimo(2,vector<int>(n));
    vector<vector<int>> maximo(2,vector<int>(n));

    int media=(nums[0][0]+nums[1][n-1])/2;
    int l=media;
    int r=media;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                minimo[i][j]=max(l, minimo[i-1][j]);
            }
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