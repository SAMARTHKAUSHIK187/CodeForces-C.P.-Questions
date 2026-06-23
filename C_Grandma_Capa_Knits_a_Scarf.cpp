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
        string s; cin >> s;
        int minDel = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int L = 0, R = n-1;
            int currDel = 0;
            bool flag = true;
            while(L < R){
                if(s[L] == s[R]){
                    L++;
                    R--;
                }
                else if(s[L] == i){
                    L++;
                    currDel++;
                }
                else if(s[R] == i){
                    R--;
                    currDel++;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if(flag) minDel = min(currDel, minDel);
        }
        if(minDel == INT_MAX) cout << -1 << endl;
        else cout << minDel << endl;
        
    }

    return 0;
}