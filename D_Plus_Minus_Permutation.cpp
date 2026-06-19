#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    
    ll lcm_xy = (x / __gcd(x, y)) * y;
    
    
    ll both = n / lcm_xy;
    ll count_x = (n / x) - both;
    ll count_y = (n / y) - both;
    
    
    ll sum_x = count_x * (2 * n - count_x + 1) / 2;
    
    
    ll sum_y = count_y * (count_y + 1) / 2;
    
    cout << sum_x - sum_y << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}