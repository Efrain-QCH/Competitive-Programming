/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      D_Max_3_D_Range_Sum.cpp
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
    ll a[n+1][n+1][n+1], b[n+1][n+1][n+1];
    ll ans=-1e9, suma=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                cin>>a[i][j][k];
                b[i][j][k]=a[i][j][k]+b[i-1][j][k]+b[i][j-1][k]+b[i][j][k-1]-b[i-1][j-1][k]-b[i-1][j][k-1]-b[i][j-1][k-1]+b[i-1][j-1][k-1];
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                for(int x=i;x<=n;x++){
                    for(int y=j;y<=n;y++){
                        for(int z=k;z<=n;z++){
                            suma=b[x][y][z]-b[i-1][y][z]-b[x][j-1][z]-b[x][y][k-1]+b[i-1][j-1][z]+b[i-1][y][k-1]+b[x][j-1][k-1]-b[i-1][j-1][k-1];
                            ans=max(ans,suma);
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;

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