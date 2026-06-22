#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n;
        char c;
        cin >> n >> c;
        string s; cin >> s;
        s += s;
        n *= 2;
        long long last_green = -1;
        long long max_diff = INT_MIN;
       for (int  i = n - 1; i >= 0; i--)
        {
            if(s[i] == 'g') last_green  = i;
            if(s[i] == c){
                long long diff = last_green - i;
                max_diff = max(diff, max_diff);
            }
        }
        cout << max_diff << endl;
        
    }

    return 0;
}