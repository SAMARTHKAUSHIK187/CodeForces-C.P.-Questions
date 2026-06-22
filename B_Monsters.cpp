#include <bits/stdc++.h>
using namespace std;


bool compareMonsters(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first > b.first; 
    }
    return a.second < b.second;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        int n, k; 
        cin >> n >> k;
        
        vector<pair<int, int>> rems;
        for (int i = 0; i < n; i++) {
            int hp; 
            cin >> hp;
            int rem = hp % k;
            
            if (rem == 0) rem = k; 
            
            rems.push_back({rem, i + 1});
        }
        
        
        sort(rems.begin(), rems.end(), compareMonsters);
        
       
        for(int i = 0; i < n; i++) {
            cout << rems[i].second << " ";
        }
        cout << "\n"; // 
    }

    return 0;
}