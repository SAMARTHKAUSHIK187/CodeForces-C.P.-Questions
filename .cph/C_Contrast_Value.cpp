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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v.size() == 1) {
            cout << "1\n" << endl;
            continue;
        }
        vector<ll> b;
        b.push_back(v[0]);
        b.push_back(v[1]);
        for (int i = 2; i < n; i++)
        {
            int currSize = b.size();
            int x = b[currSize - 2] - b[currSize- 1];
            int y = b[currSize-1] - v[i];
            if(x > 0){
                if(y > 0){
                    b[currSize - 1] = v[i];
                }else if(y < 0){
                    b.push_back(v[i]);
                }
            }else{
                if(y < 0){
                    b[currSize-1] = v[i];
                }else if(y > 0){
                    b.push_back(v[i]);
                }
            }
        }
        int finaSize = b.size();
        if(b[0] == b[1]) finaSize--;
        cout << finaSize << endl;
        
        
    }

    return 0;
}