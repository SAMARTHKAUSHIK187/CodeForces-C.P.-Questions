#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll res = 0;
        for (int i = 0; i < n/2; i++)
        {
            res = __gcd(res, abs(v[i] - v[n-1-i]));
        }
        cout << res << endl;
        
    }

    return 0;
}