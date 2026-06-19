#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> v(n);
        ll gcdO = v[1], gcdE = v[0];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i & 1){
                gcdO = __gcd(gcdO, v[i]);
            }else{
                gcdE = __gcd(gcdE, v[i]);
            }
        }
        
        bool flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if(v[i]%gcdO == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << gcdO << endl;
            continue;
        }
        flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if(v[i]%gcdE == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << gcdE << endl;
        }else{
            cout << 0 << endl ;
        }
        
        
    }

    return 0;
}