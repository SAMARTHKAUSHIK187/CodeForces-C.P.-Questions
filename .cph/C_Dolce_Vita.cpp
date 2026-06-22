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
        ll x; cin >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll prefixSum = 0;
        ll items = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            prefixSum += v[i];
            if(prefixSum > x) break;
            items += ((x - prefixSum)/(i + 1)) + 1;
        }
        cout << items << endl;
    }

    return 0;
}