#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        ll n = s.size();
        s.append(s);
        
        ll streak = 0, maxStreak = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') {
                streak++;
                
                maxStreak = max(maxStreak, streak); 
            } else {
                streak = 0;
            }
        }

        
        if (maxStreak == 2 * n) {
            cout << n * n << "\n";
        } else {
 
            ll sum = maxStreak + 1;
            ll a = sum / 2;        
            ll b = (sum + 1) / 2;  
            
            cout << a * b << "\n";
        }
    }

    return 0;
}