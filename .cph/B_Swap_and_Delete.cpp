#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
       string s;
       cin >> s;
       int n = s.size();
       int zero = 0, one = 0;
       for(int i = 0; i < n; i++)
       {
        if(s[i] == '0') zero++;
        else one++;
       }
       int n0 = 0;
       for(int i = 0; i < n; i++){
        if(s[i] == '0' && one > 0)
        {
            one--; n0++;
        }
        else if(s[i] == '1' && zero > 0)
        {
            zero--; n0++;
        }
        else break;
       }
       cout << n - n0 << endl;
    }

    return 0;
}