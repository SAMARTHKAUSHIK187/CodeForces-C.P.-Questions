#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, k;
        long long q; cin >> n >> k >> q;
        vector<int> v(n);
        long long streak = 0;        
        long long total_ways = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] <= q) streak++;
            else{
                if(streak >= k){
                    total_ways += ((streak - k + 1) * (streak -k + 2)) /2;
                }
                streak = 0;
            }
        }
        if(streak >= k) total_ways += ((streak - k + 1) * (streak -k + 2)) /2;
        cout << total_ways << endl;
        
    }

    return 0;
}