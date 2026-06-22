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
        int left = 0;
        int right = n-1;
        int leftSum = v[left];
        int rightSum = v[right];
        int maxCandies = 0;
        while (left < right)
        {
            if(leftSum == rightSum){
                maxCandies = ( (left + 1) + (n-right) );
                left++;
                leftSum += v[left];
            }else if(leftSum > rightSum){
                right--;
                rightSum += v[right];
            }else{
                left++;
                leftSum += v[left];
            }
        }
        if(maxCandies > 0) cout << maxCandies << endl;
        else cout << 0 << endl;
        
        
    }

    return 0;
}