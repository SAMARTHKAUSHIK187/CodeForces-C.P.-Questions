#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, p; cin >> n >> p;
        vector<int> a(n);
        vector<int> b(n);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());

        int covered = 1;
        long long cost = p;
        for(auto &it : v){
            int bi = it.first;
            int ai = it.second;
            if(bi >= p) break;

            int take = min(ai, n-covered);
            cost += 1LL * take * bi;
            covered += take;

            if(covered >= n) break;
        }

        if(covered < n){
            cost += 1LL * (n - covered) * p;
        }
        cout << cost << endl;
    }

    return 0;
}