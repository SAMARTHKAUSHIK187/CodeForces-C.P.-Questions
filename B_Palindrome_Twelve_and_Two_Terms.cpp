#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s, z;
        cin >> s >> z;

        
        ll ss = 0, sz = 0, zs = 0, zz = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && z[i] == '1') ss++;
            else if (s[i] == '1' && z[i] == '0') sz++;
            else if (s[i] == '0' && z[i] == '1') zs++;
            else zz++;
        }

        
        ll cnt_s = (1LL << (k - 1)) + 1;
        ll cnt_x = (1LL << (k - 1));

        
        ll ones_s = ss + sz;   
        ll ones_x = sz + zs;   

        
        ll contrib_s = ones_s * (n - ones_s);
        ll contrib_x = ones_x * (n - ones_x);

        ll ans = cnt_s * contrib_s + cnt_x * contrib_x;
        cout << ans << "\n";
    }

    return 0;
}