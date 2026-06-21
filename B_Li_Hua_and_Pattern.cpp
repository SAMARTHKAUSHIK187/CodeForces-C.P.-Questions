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
        ll k; cin >> k;
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v[i][j] != v[n-1-i][n-1-j]) cnt++;
            }
        }
        cnt /= 2;
        if(cnt > k){
            cout << "NO" << endl;       
        }
        else{
            int exOps = cnt - k;
            if(((n&1)) || !(exOps&1)){
                cout << "YES" << endl;
            }else cout << "NO" << endl;
        }
    }
    return 0;
}