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
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int x ; cin >> x;
            if(x != i){
                if(ans == -1) ans = x;
                else ans = ans & x;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}