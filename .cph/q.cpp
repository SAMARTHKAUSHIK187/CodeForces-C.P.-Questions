#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        std::vector<int>v(n) ;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int sum = 0;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(v[i], mini);
            sum += mini;
        }
        cout << sum << endl;
    }
}
