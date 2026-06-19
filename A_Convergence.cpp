#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int>& a) {
    sort(a.begin(), a.end());
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int T = a[i];
        int L = (int)(lower_bound(a.begin(), a.end(), T) - a.begin());
        int R = (int)(a.end() - upper_bound(a.begin(), a.end(), T));
        ans = min(ans, max(L, R));
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}