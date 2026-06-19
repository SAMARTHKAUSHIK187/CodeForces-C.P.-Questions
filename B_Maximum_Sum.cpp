#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    
    sort(v.begin(), v.end());
    
    
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }
    
    ll max_sum = 0;
    
    
    for (int i = 0; i <= k; i++) {
        int left_removed = 2 * i;
        int right_removed = k - i;
        
        
        ll current_sum = pref[n - right_removed] - pref[left_removed];
        
        max_sum = max(max_sum, current_sum);
    }
    
    cout << max_sum << "\n";
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