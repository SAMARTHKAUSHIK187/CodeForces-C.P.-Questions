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
        if(v[n-2] > v[n-1]){
            cout << -1 << "\n";
            continue;
        }
        else if(v[n-1] >= 0){
            cout << n-2 << "\n";
            for(int i = 1; i <= n-2; i++){
                cout << i  << " " << n-1 << " " << n << "\n";
            }
        }
        else{
            if(is_sorted(v.begin(), v.end())){
                cout << 0 << "\n";
            }else cout << -1 << "\n";
        }
    }

    return 0;
}