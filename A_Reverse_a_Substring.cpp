#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        ll n; cin >> n;
        string s;
        cin >> s;
        bool exists = false;
        int flag = 0;
        for (ll i = 0; i < n - 1; i++)
        {
           if(s[i] > s[i + 1]){
                cout << "YES" << endl;
                cout << i + 1 << " " << i + 2 << endl;
                flag = 1;
                break;
           }
        }
        if(flag == 0) cout << "NO" << endl;

    return 0;
}