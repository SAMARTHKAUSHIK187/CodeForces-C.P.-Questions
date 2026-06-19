#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long sum = 0, ans = LLONG_MAX;
        for(int i = 0; i < n; i++){
            sum += a[i];
            ans = min(ans, sum / (long long)(i + 1));
            cout << ans;
            if(i < n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}