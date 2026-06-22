#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, bool> mpp;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(!mpp[s[i]]){
                ans += n - i;
                mpp[s[i]] = true;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}