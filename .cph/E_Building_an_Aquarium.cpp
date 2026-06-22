#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPoss(ll h,const vector<ll>& v, ll x){
    int n = v.size();
    ll water = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] <= h){
            water += h - v[i];
        }
    }
    if(water <= x) return true;
    return false;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; ll x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll i = 0, j = 2e9 + 7;
        ll ans = 0;
        while (i < j)
        {
            ll mid  = i + (j - i)/2;
            if(isPoss(mid, v, x)){
                ans = mid;
                i = mid + 1;
            }else{
                j = mid;
            }
        }
        cout << ans << endl;

    }

    return 0;
}