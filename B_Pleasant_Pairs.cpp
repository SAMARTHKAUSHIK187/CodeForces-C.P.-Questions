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
        vector<pair<ll, ll>> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i+1;
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                if((v[i].first * v[j].first) >= 2*n) break;

                if((v[i].second + v[j].second) == (v[i].first*v[j].first)) cnt++;
            }
        }
        cout << cnt << endl;
        
        
    }

    return 0;
}