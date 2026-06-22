#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<int> count1(k, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count1[i % k]++;
            }
        }
        
        bool possible = true;
        for (int i = 0; i < k; i++) {
            if (count1[i] % 2 != 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}