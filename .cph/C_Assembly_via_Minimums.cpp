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
        int m = (n * (n-1))/2;
        vector<ll> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int i = 0;
        int ind = n-1;
        while(i < m)
        {
            cout << b[i] << " ";
            i += ind;
            ind--;
        }
        cout << b[m-1] << endl;
        
    }

    return 0;
}