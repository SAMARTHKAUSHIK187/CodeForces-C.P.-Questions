#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    int max_h = *max_element(h.begin(), h.end());
    int min_h = *min_element(h.begin(), h.end());
    cout << max_h - min_h + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}