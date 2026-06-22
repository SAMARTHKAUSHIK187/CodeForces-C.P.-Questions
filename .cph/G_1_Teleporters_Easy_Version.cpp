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
        ll c; cin >> c;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v[i] = x+i+1;
        }
        sort(v.begin(), v.end());
        int temp = c;
        int cnt = 0;
        while (temp >= 0 && cnt < n)
        {
            if(v[cnt] > temp) break;
            else temp -= v[cnt];
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}