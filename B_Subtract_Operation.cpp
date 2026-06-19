#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; ll k;
        cin >> n >> k;
        map<ll, int> mpp;
        bool flag = false;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mpp[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if(mpp.find(v[i] - k) != mpp.end()){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
    }

    return 0;
}