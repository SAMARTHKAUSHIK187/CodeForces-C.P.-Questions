#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = 1;
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < n; i++)
        {
            ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll count = (a.size() - temp);
            ans = ans * ((count-i) * 1LL) % MOD;  
        }
        cout << ans << endl;
        
        
    }

    return 0;
}