#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        vector<int> b(n);
        for(int &x : b) cin >> x;

        int sum = 0;
        int ans = 0;
        int maxele = 0;
        for (int i = 0; i < min(n, k); i++)
        {
            sum += a[i];
            maxele = max(b[i], maxele);
            ans = max(ans, sum + (k - (i + 1)) * maxele);
        }
        cout << ans << endl;
        
    }

    return 0;
}