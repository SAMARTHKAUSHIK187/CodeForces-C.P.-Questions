#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int total = n * k;
        vector<int> v(total, 0);
        int ptr = total -1;
        for (int i = 0; i < total; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int sum = 0;
        while (ptr > 0)
        {
            sum += v[ptr/2+ 1];
        }
        cout << sum << "\n";
        
    }

    return 0;
}