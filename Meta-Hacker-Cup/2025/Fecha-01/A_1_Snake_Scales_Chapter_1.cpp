#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if (n <= 1) {
        std::cout << 0 << std::endl;
        return;
    }

    int max_diff = 0;
    for (int i = 0; i < n - 1; ++i) {
        max_diff = std::max(max_diff, std::abs(a[i+1] - a[i]));
    }

    std::cout << max_diff << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; ++i) {
        std::cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
