#include <bits/stdc++.h>
using namespace std;

// Updated to handle n < 3
vector<int> max3Sum(vector<int> arr) {
    int n = arr.size();
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = {arr[i], i};
    }
    sort(temp.rbegin(), temp.rend());
    
    vector<int> ans;
    
    for (int i = 0; i < min(n, 3); i++) {
        ans.push_back(temp[i].second);
    }
    
    while (ans.size() < 3) ans.push_back(-1); 
    
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        vector<int> maxa = max3Sum(a);
        vector<int> maxb = max3Sum(b);
        vector<int> maxc = max3Sum(c);
        
        long long maxSum = 0; 
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    
                    if (maxa[i] == -1 || maxb[j] == -1 || maxc[k] == -1) continue;
                    
                    
                    if (maxa[i] == maxb[j] || maxa[i] == maxc[k] || maxb[j] == maxc[k]) continue;
                    
                    long long sum = (long long)a[maxa[i]] + b[maxb[j]] + c[maxc[k]];
                    maxSum = max(maxSum, sum);
                }
            }
        }
        cout << maxSum << "\n";
    }
    return 0;
}