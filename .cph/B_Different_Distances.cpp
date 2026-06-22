#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> ans;

    
    for (int i = 1; i <= n; i++) {
        ans.push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        ans.push_back(i);
        ans.push_back(i);
    }

    for (int i = n - 1; i >= 1; i--) {
        ans.push_back(i);
    }
    ans.push_back(n);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
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