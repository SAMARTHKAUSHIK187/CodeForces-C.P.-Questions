#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> v(n);
        bool same = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i > 0){
                if(v[i] != v[i - 1]) same = false;
            }
        }
        if(same){
            cout << 0 << endl;
            continue;
        }
        // sort(v.begin(), v.end());
        vector<ll> divisors;
        for (ll i = 1; i * i <= n ; i++)
        {
            if(0 == n % i){
                divisors.push_back(i);
                if(i != n / i){
                divisors.push_back(n / i);
            }
            }
        }
        sort(divisors.begin(), divisors.end());
        vector<ll> prefixSum(n, 0);
        ll mini = LLONG_MAX;
        ll maxi = LLONG_MIN;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if(i == 0) prefixSum[i] = v[i];
            else{
                prefixSum[i] = prefixSum[i - 1] + v[i];
            }
        }
        for (ll i = 0; i < divisors.size(); i++)
        {
            ll num = divisors[i];
            for (ll j = num - 1; j < n; j += num)
            {
                if(j == num - 1){
                    mini = min(mini, prefixSum[j]);
                    maxi = max(maxi, prefixSum[j]);
                }else{
                    mini = min(mini, (prefixSum[j] - prefixSum[j - num]));
                    maxi = max(maxi, (prefixSum[j] - prefixSum[j - num]));
                }
            }
            sum = max(sum, (maxi - mini));
            maxi = LLONG_MIN;
            mini = LLONG_MAX;
        }
        cout << sum << endl;
        
        
        
    }

    return 0;
}