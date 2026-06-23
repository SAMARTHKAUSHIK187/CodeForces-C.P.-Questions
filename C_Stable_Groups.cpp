#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, x; 
    if (!(cin >> n >> k >> x)) return 0;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end());

    vector<ll> needed_insertions;
    ll initial_groups = 1;

    
    for (ll i = 1; i < n; i++) {
        ll gap = v[i] - v[i-1];
        if (gap > x) {
            initial_groups++;
            needed_insertions.push_back((gap - 1) / x);
        }
    }

    
    sort(needed_insertions.begin(), needed_insertions.end());

    
    ll current_groups = initial_groups;
    for (ll needed : needed_insertions) {
        if (k >= needed) {
            k -= needed;
            current_groups--;
        } else {
            break;
        }
    }

    cout << current_groups << "\n";

    return 0;
}