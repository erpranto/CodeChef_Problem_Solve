#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    int need = 50 - x;
    int min_sum = 2 * y;
    int max_sum = 2 * (y + 5);
    
    if (need >= min_sum && need <= max_sum)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
