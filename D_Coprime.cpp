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
        vector<ll> ind(1001, -1);
        for (int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            ind[x] = i;
        }
        ll maxAns = -1;
        for (int i = 1; i <= 1000; i++)
        {
           if(ind[i] != -1){
            for (int j = 0; j <= 1000; j++)
            {
                if(ind[j] != -1 && __gcd(i , j) == 1){
                    maxAns = max(maxAns, ind[i] + ind[j]);
                }
            }
            
           }
        }
        cout << maxAns << endl;
        
    }

    return 0;
}