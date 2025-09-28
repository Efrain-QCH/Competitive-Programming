/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-11                      _/ \_ 
*  File :      Chessboard_and_Queens.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

char board[8][8];
int res = 0;
bool col[8], diag1[15], diag2[15];

void backtrack(int row) {
    if (row == 8) {
        res++;
        return;
    }
    for (int c = 0; c < 8; ++c) {
        if (board[row][c] == '*' || col[c] || diag1[row + c] || diag2[row - c + 7])
            continue;
        col[c] = diag1[row + c] = diag2[row - c + 7] = true;
        backtrack(row + 1);
        col[c] = diag1[row + c] = diag2[row - c + 7] = false;
    }
}

void solve() {
    res = 0;
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            cin >> board[i][j];
    memset(col, 0, sizeof(col));
    memset(diag1, 0, sizeof(diag1));
    memset(diag2, 0, sizeof(diag2));
    backtrack(0);
    cout << res << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}