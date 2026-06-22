#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        int cnt = 0;
        set<int> se;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i > 0){
                if(abs(v[i] - v[i-1]) == 1) {
                    se.insert(v[i-1]);
                    se.insert(v[i]);
                }
            }
        }
        cout << se.size()/2 << endl;
        
        
    }

    return 0;
}