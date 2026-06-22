#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> second_min(n);
        vector<int> first_min(n);
        int sum = 0;
        int min_min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int m; cin >> m;
            vector<ll> v(m);
            for (int j = 0; j < m; j++)
            {
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            sum += v[0];
            first_min[i] = v[0];
            second_min[i] = v[1];
            
        }
        int min_ind = min_element(first_min.begin(), first_min.end()) - first_min.begin();
        int max_ind = max_element(first_min.begin(), first_min.end()) - first_min.begin();
        
        int temp = sum - first_min[min_ind] + second_min[max_ind];
        cout << max(sum, temp) << endl;
        
    }

    return 0;
}