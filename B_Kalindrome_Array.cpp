#include <bits/stdc++.h>
using namespace std;

// This helper function checks if the vector is a palindrome,
// completely ignoring any element that equals 'skip_val'.
bool isKalindrome(const vector<int>& v, int skip_val) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] == skip_val) {
            i++;
        } else if (v[j] == skip_val) {
            j--;
        } else if (v[i] == v[j]) {
            i++;
            j--;
        } else {
            return false; // Found a mismatch that wasn't the skipped value
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int num1 = -1, num2 = -1;
        int i = 0, j = n - 1;
        
        // Find the first mismatch
        while (i < j) {
            if (v[i] == v[j]) {
                i++;
                j--;
            } else {
                num1 = v[i];
                num2 = v[j]; 
                break;
            }
        }

        if (num1 == -1) {
            cout << "YES\n";
        } 
        else if (isKalindrome(v, num1) || isKalindrome(v, num2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}