#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<ll , ll>> cor(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cor[i].first >> cor[i].second;
        }
        ll dist1 = abs(cor[a-1].first - cor[b-1].first) + (abs(cor[a-1].second - cor[b-1].second));
        ll dist2 = LLONG_MAX/2, dist3 = LLONG_MAX/2;
        for (int i = 0; i < k; i++)
        {
            dist2 = min(dist2,(long long) abs(cor[a-1].first - cor[i].first) + abs(cor[a-1].second - cor[i].second));
            dist3 = min(dist3,(long long) abs(cor[i].first - cor[b-1].first) + abs(cor[i].second - cor[b-1].second));
        }
        cout << min(dist1, (long long)(dist2 + dist3)) << "\n";
        
    }

    return 0;
}