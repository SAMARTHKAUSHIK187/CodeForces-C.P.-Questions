#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    
    if (a > b) {
        swap(a, b);
    }

    
    if (b % a != 0) {
        cout << -1 << "\n";
        return;
    }

    long long deficiency = b / a;
    int count2 = 0;

    
    while (deficiency % 2 == 0) {
        count2++;
        deficiency /= 2;
    }

    
    if (deficiency != 1) {
        cout << -1 << "\n";
        return;
    }

    
    int ops = 0;
    ops += count2 / 3;
    count2 %= 3;
    
    ops += count2 / 2;
    count2 %= 2;
    
    ops += count2;    

    cout << ops << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}