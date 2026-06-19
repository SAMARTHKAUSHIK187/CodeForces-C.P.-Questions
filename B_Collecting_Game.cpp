#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        vector<pair<int, int>> v(n); //{value, index}        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<ll> prefixSum(n);
        for (int i = 0; i < n; i++)
        {
            if(i == 0) prefixSum[i] = v[i].first;
            else prefixSum[i] = prefixSum[i - 1] + v[i].first;
        }
        vector<int> ans(n, 0);
        ans[v[n-1].second] = n - 1;

        for (int i = n - 2; i  >= 0; i--)
        {
            ans[v[i].second] = i;
            if(prefixSum[i] >= v[i + 1].first)    {
                ans[v[i].second] = ans[v[i + 1].second];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        
        
        cout << "\n";   
        
    }

    return 0;
}