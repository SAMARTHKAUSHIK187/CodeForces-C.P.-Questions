#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        ll n, l, r; cin >> n >> l >> r;
        bool isPos = true;
        vector<ll> ans(n + 1, 0);
        
        for (ll i = 1; i <= n; i++)
        {
            ll val = (r / i) * i;
            if(val < l){
                isPos = false;
                break;
            }
            ans[i] = val;
        }
        
        if(isPos){
            cout << "YES\n"; 
            for(int i = 1; i <= n; i++) { 
                cout << ans[i] << (i == n ? "" : " ");
            }
            cout << "\n";
        } else {
            cout << "NO\n"; 
        }
    }

    return 0;
}