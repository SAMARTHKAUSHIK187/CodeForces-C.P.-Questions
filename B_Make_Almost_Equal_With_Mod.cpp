#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; 
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    
    for (int i = 1; i <= 61; i++) {
        set<ll> distVal;
        ll k = 1LL << i; 
        
        for (int j = 0; j < n; j++) {
            distVal.insert(v[j] % k); 
            if (distVal.size() > 2) break; 
        }
        
        if (distVal.size() == 2) {
            cout << k << "\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}