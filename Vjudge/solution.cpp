#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int caseNum) {
    string s, t;
    cin >> s >> t;

    int s1_t0 = 0; // S has '1', T has '0'
    int s0_t1 = 0; // S has '0', T has '1'
    int sQ_t0 = 0; // S has '?', T has '0'
    int sQ_t1 = 0; // S has '?', T has '1'

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '1' && t[i] == '0') {
            s1_t0++;
        } else if (s[i] == '0' && t[i] == '1') {
            s0_t1++;
        } else if (s[i] == '?' && t[i] == '0') {
            sQ_t0++;
        } else if (s[i] == '?' && t[i] == '1') {
            sQ_t1++;
        }
    }

    cout << "Case " << caseNum << ": ";

    if (s1_t0 > s0_t1) {
        // More '1's in wrong places than '0's to swap with. Impossible.
        // The total number of '1's in S would be greater than in T.
        int s_ones = 0;
        int t_ones = 0;
        for(char c : s) if(c == '1') s_ones++;
        for(char c : t) if(c == '1') t_ones++;
        if (s_ones > t_ones) {
             cout << -1 << endl;
             return;
        }
    }
    
    // Moves for '?': sQ_t0 + sQ_t1
    // Moves for '0' vs '1' mismatches:
    // We can do min(s1_t0, s0_t1) swaps. Each costs 1 move.
    // This resolves min(s1_t0, s0_t1) of the s0_t1 cases.
    // The remaining s0_t1 - min(s1_t0, s0_t1) cases must be changed from 0 to 1. Cost is s0_t1 - min(s1_t0, s0_t1).
    // Total cost for 0/1 mismatches is min(s1_t0, s0_t1) + (s0_t1 - min(s1_t0, s0_t1)) = s0_t1.
    // The s1_t0 cases are resolved by the swaps. If s1_t0 > s0_t1, it's impossible.
    
    int swaps = min(s1_t0, s0_t1);
    int zero_to_one_changes = s0_t1 - swaps;
    int q_changes = sQ_t0 + sQ_t1;
    
    int total_moves = swaps + zero_to_one_changes + q_changes + (s1_t0 - swaps);

    cout << total_moves << endl;
}

int main() {
    // For local testing, redirect input from a file.
    // freopen("input.txt", "r", stdin);

    int C;
    cin >> C;
    for (int i = 1; i <= C; ++i) {
        solve(i);
    }

    return 0;
}
