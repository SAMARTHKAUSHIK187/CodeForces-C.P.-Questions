#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n , k; cin >> n >> k;
        string s; cin >> s;
        stack<int> st;
        int cnt = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if(cnt < k && s[i] == '('){
                ans += '1';
                cnt++;
            }
            else ans += '0';
        }
        if(n == 2 && k == 1){
            cout << "00" << endl;
        }else cout << ans << endl;
        

    }

    return 0;
}