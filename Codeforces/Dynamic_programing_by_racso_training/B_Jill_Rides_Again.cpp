/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      B_Jill_Rides_Again.cpp
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()

void solve(int test_case) {
    int s;
    cin >> s;
    vector<ll> arr(s - 1);
    for (int i = 0; i < s - 1; i++) cin >> arr[i];

    ll suma = 0, maximo = 0;
    int start = 0;           
    int bestL = 0, bestR = 0; 

    for (int i = 0; i < s - 1; i++) {
        suma += arr[i];

        if (suma > maximo ||
            (suma == maximo && (i - start > bestR - bestL))) {
            maximo = suma;
            bestL = start;
            bestR = i;
        }

        if (suma < 0) {
            suma = 0;
            start = i + 1;
        }
    }

    if (maximo > 0)
        cout << "The nicest part of route " << test_case<< " is between stops " << bestL + 1 << " and " << bestR + 2 << endl;
    else
        cout << "Route " << test_case << " has no nice parts" << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) solve(i);
    return 0;
}
