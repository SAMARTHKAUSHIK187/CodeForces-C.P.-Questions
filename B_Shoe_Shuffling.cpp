#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0;
    vector<int> ans(n);
    
    while (l < n) {
        int r = l;
        
        while (r + 1 < n && v[r + 1] == v[l]) {
            r++;
        }
        
        if (l == r) {
            cout << -1 << "\n";
            return;
        }
        
        
        
        for (int i = l; i < r; i++) {
            ans[i] = i + 2; 
        }
        ans[r] = l + 1; 
        
        
        l = r + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}