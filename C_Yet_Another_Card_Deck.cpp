#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; 
    cin >> n >> q;
    
    vector<int> a(n);
    vector<int> firstPos(51, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (firstPos[a[i]] == 0) {
            firstPos[a[i]] = i + 1;
        }
    }
    
    while (q--) {
        int x; 
        cin >> x;
        int ans = firstPos[x];
        
        for(int c = 1; c <= 50; c++) {
            if(firstPos[c] != 0 && firstPos[c] < ans) {
                firstPos[c]++;
            }
        }
        
        firstPos[x] = 1;
        
        cout << ans << " ";
    }
    
    return 0;
}