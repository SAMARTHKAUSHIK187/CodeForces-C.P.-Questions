#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long computeXOR(long long a){
    int rem = a % 4;
    if(rem == 0) return a;
    if(rem == 1) return 1;
    if(rem == 2) return a + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        ll ans = computeXOR(a-1);
        if(ans == b) cout << a << endl;
        else if((ans ^ b) == a) cout << a + 2 << endl;
        else cout  << a + 1 << endl;
        
    }

    return 0;
}