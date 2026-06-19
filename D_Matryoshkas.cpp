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
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mpp[v[i]]++;
        }
        int ans = 0;
        for(auto &it: mpp){
            int val = it.first;
            ans += max(0, mpp[val] - mpp[val-1]);
        }
        cout << ans << endl;
    }

    return 0;
}