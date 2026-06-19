#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        int negCnt = 0;
        int minAbs = INT_MAX; 
        int sum = 0;          
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val;
                cin >> val;
                
                if(val < 0){
                    negCnt++;
                }
                
                
                sum += abs(val);
                
                minAbs = min(minAbs, abs(val)); 
            }
        }

        
        if(negCnt % 2 != 0){
            sum -= 2 * minAbs;
        }
        
        cout << sum << "\n";
    }

    return 0;
}