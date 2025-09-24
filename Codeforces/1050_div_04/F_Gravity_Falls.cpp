/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-19                      _/ \_ 
*  File :      F_Gravity_Falls.cpp
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

    vector<vector<int>> arr(n);

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
    }
    vector<int> ans;
    while(!arr.empty()){
        sort(all(arr));
        vector<vector<int>> temp;
        int index=0;
        for(auto x: arr[0]){
            index++;
            ans.push_back(x);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i].size()>index){
                vector<int> t;
                for(int j=index;j<arr[i].size();j++){
                    t.push_back(arr[i][j]);
                }
                temp.push_back(t);
            }
        }
        arr=temp;
    }

    for(auto x: ans){
        cout<<x<<" ";
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