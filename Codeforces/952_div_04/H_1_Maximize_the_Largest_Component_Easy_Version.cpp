/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      H_1_Maximize_the_Largest_Component_Easy_Version.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }
    map<int, int> val;
    vector<vector<int>> color(n, vector<int>(m, -1));
    auto bfs = [&](int startX, int startY, int cl) {
        
        queue<pair<int, int>> q;
        q.push({startX, startY});
        color[startX][startY] = 1;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        int cnt = 1;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            color[x][y] = cl;
            q.pop();
            for (int k = 0; k < 4; ++k) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] == '#' && color[nx][ny] == -1) {
                    color[nx][ny] = cl;
                    cnt++;
                    q.push({nx, ny});
                }
            }
        }
        val[cl] = cnt;
    };
    int cl = 0; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == '#' && color[i][j] == -1) {
                bfs(i, j, ++cl);
            }
        }
    }
    
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int temp = 0;
        set<int> taken;
        for (int j = 0; j < m; ++j) {
            if (color[i][j] == -1) {
                temp += 1;
            }
            for (int x = i - 1; x <= i + 1; ++x) {
                if (x >= 0 && x < n) {
                    if (color[x][j] != -1) {
                        taken.insert(color[x][j]);
                    }
                }
            }
        }
        
        for (auto &x : taken) {
            temp += val[x];
        }
        
        ans = max(ans, temp);
    }
    
    for (int j = 0; j < m; ++j) {
        int temp = 0;
        set<int> taken;
        for (int i = 0; i < n; ++i) {
            if (color[i][j] == -1) {
                temp += 1;
            }
            for (int x = j - 1; x <= j + 1; ++x) {
                if (x >= 0 && x < m) {
                    if (color[i][x] != -1) {
                        taken.insert(color[i][x]);
                    }
                }
            }
        }
        for (auto &x : taken) {
            temp += val[x];
        }
        
        ans = max(ans, temp);
        
    }

    cout << ans << '\n';
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