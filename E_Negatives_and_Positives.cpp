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
        ll sum = 0;
        int negCnt = 0;
        ll mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] <= 0) negCnt++;
            mini = min(abs(v[i]), mini);
        }
        for(ll x: v) sum += abs(x);
        if(negCnt & 1){
            cout << sum - ( 2*mini) << endl;
        }else cout << sum << endl;
    }

    return 0;
}