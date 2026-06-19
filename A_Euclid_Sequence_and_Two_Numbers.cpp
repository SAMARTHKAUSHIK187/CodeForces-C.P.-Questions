#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<ll>());

        if (n == 2) {
            cout << v[0] << " " << v[1] << "\n";
            continue;
        }

        bool valid = true;
        for (int i = 0; i <= n - 3; i++) {
            if (v[i] % v[i + 1] != v[i + 2]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << v[0] << " " << v[1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}