#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        long long x, y, k; cin >> x >> y >> k;
        long long total_torches = k + k * y;
        long long stick_trades = (total_torches + x - 3) / (x - 1);

        cout << stick_trades + k << "\n";
    }

    return 0;
}