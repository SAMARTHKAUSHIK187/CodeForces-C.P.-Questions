#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, x, s;
        cin >> n >> x >> s;
        string v; cin >> v;

        int emptyTables = x;
        
        map<int, int> partial; 
        int seated = 0;

        for (char c : v) {
            if (c == 'I') {
                if (emptyTables > 0) {
                    emptyTables--;
                    seated++;
                    if (s - 1 > 0) partial[s - 1]++;
                }

            } else if (c == 'E') {
                if (!partial.empty()) {
                    auto it = partial.begin(); 
                    int rem = it->first;
                    seated++;
                    it->second--;
                    if (it->second == 0) partial.erase(it);
                    if (rem - 1 > 0) partial[rem - 1]++;
                }

            } else { 
                if (!partial.empty()) {
                    auto it = partial.begin();
                    int rem = it->first;
                    seated++;
                    it->second--;
                    if (it->second == 0) partial.erase(it);
                    if (rem - 1 > 0) partial[rem - 1]++;
                } else if (emptyTables > 0) {
                    emptyTables--;
                    seated++;
                    if (s - 1 > 0) partial[s - 1]++;
                }

            }
        }

        cout << seated << "\n";
    }

    return 0;
}