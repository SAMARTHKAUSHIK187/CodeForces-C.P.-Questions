#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> v(n * k);
        for (int i = 0; i < n*k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ptr = n * k;
        ll sum = 0;
        while (k--)
        {
            ptr -= (n/2 + 1);
            sum += v[ptr];
        }
        cout << sum << "\n";
        
    }

    return 0;
}