#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        map<char, int> mpp;
        for (int i = 0; i < s2.size(); i++)
        {
            mpp[s2[i]]++;
        }
        reverse(s2.begin(), s2.end());
        string ans = "";
        for (int i = n-1; i >= 0; i--)
        {
            if(mpp[s1[i]] > 0){
                ans += s1[i];
                mpp[s1[i]]--;
            }
        }
        
        if(ans == s2)cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}