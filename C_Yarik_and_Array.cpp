#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int currSum = v[0];
        int maxSum = v[0];
        for (int i = 1; i < n; i++)
        {
            if((abs(v[i - 1]) % 2) == (abs(v[i]) % 2)){
                currSum = 0;
            }
            if(currSum < 0){
                currSum = 0;
            }
            currSum += v[i];
            maxSum = max(currSum, maxSum);
        }
        
        
        cout << maxSum << "\n";
        
    }

    return 0;
}