#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> v(m, vector<ll>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[j][i];
            }
        }
        ll ans = 0;
        for (int i = 0; i < m; i++)
        {
            sort(v[i].begin(), v[i].end());
            for (ll j = 0; j < n; j++)
            {
                ans += (v[i][j] * j)- (v[i][j] *(n-1-j));
            }
        }
        cout << ans << " ";
        cout << "\n";
        
    }

    return 0;
}