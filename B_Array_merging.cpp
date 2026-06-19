#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    
    vector<int> max_a(2 * n + 1, 0);
    vector<int> max_b(2 * n + 1, 0);
    
    
    int current_streak = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            current_streak++;
        } else {
            max_a[a[i - 1]] = max(max_a[a[i - 1]], current_streak);
            current_streak = 1;
        }
    }
    max_a[a[n - 1]] = max(max_a[a[n - 1]], current_streak);
    
    
    current_streak = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            current_streak++;
        } else {
            max_b[b[i - 1]] = max(max_b[b[i - 1]], current_streak);
            current_streak = 1;
        }
    }
    max_b[b[n - 1]] = max(max_b[b[n - 1]], current_streak); 
    
    
    int max_ans = 0;
    for (int i = 1; i <= 2 * n; i++) {
        max_ans = max(max_ans, max_a[i] + max_b[i]);
    }
    
    cout << max_ans << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}