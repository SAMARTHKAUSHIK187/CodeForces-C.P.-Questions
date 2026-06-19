#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int ans = INT_MAX;

        if (k != 4) {
            for (int x : a) {
                int rem = x % k;
                ans = min(ans, (k - rem) % k);
            }
        } else {
            int even = 0;
            int best = INT_MAX;

            for (int x : a) {
                if (x % 2 == 0) even++;
                best = min(best, (4 - x % 4) % 4);
            }

            if (best == 0) ans = 0;
            else if (even >= 2) ans = 0;
            else if (even == 1) ans = 1;
            else ans = min(best, 2);
        }

        cout << ans << '\n';
    }
}