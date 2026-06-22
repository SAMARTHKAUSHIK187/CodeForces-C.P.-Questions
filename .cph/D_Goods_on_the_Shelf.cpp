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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(i > 0){
                if((i & 1) && (v[i - 1] == v[i])) continue;
                else if( i & 1){
                    for (int j = i + 1; j < n; j++)
                    {
                        if(v[j] == v[i - 1]){
                            swap(v[j], v[i]);
                        }
                    }
                    
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if((i & 1) && v[i-1] != v[i]){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
        
    }

    return 0;
}