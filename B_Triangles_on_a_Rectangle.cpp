#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        ll w, h; cin >> w >> h;
        long long maxArea = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            int k; cin >> k;
            ll first, last;
            for (int j = 0; j < k; j++)
            {
                int x; cin >> x;
                if(j == 0) first = x;
                if(j == k-1) last = x;
            }
            long long area;
            if(i <= 1){
                area = (last - first) * h;
            }else area = (last - first) * w;
            maxArea = max(area, maxArea);
        }
        cout << maxArea << endl;
        
    }

    return 0;
}