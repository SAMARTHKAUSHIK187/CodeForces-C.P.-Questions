#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, x, y, z; cin >> n >> x >> y >> z;
        int totalLine = n;
        int totalHours1 = 0;
        totalLine -= (z*x);
        totalHours1 += z;
       while(totalLine > 0){
        totalLine -= (x + 10*y);
        totalHours1 += 1;
       }
       totalLine = n;
       int totalHours2 = 0;
       while (totalLine > 0)
       {
        totalLine -= (x + y);
        totalHours2 += 1;
       }
       cout << min(totalHours1, totalHours2) << endl;
        
        
    }

    return 0;
}