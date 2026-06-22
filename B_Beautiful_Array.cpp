#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n;
        long long k, b, s; cin >> n >> k >> b >> s;
        long long min_s = k * b;
        long long max_s = k * b + (k - 1) * n;
        if(!(s >= min_s && s <= max_s)) cout << -1 << endl;
        else{
            vector<long long> ans(n, 0);
            ans[0] = min_s;
            s -= min_s;
            for (int i = 0; i < n; i++)    
            {
                int add = min(k-1, s);
                ans[i] += add;
                s -= add;
            }
            
            for(int i = 0; i < n; i++) cout << ans[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}