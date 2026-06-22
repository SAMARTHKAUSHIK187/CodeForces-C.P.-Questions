#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int binSearch(vector<ll>& pmax, ll query, int size){
    int i = 0;
    int j = size - 1;
    int ans = -1;
    while (i <= j)
    {
        int mid = (i + j)/2;
        if(pmax[mid] <= query){
            ans = mid;
            i = mid + 1;
        }else j = mid - 1;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<ll> steps(n);
        for (int i = 0; i < n; i++)
        {
            cin >> steps[i];
        }
        vector<ll> query(q);
        for (int i = 0; i < q; i++)
        {
            cin >> query[i];
        }
        vector<ll> psum(n), pmax(n);
        psum[0] = steps[0];
        pmax[0] = steps[0];
        for (int i = 1; i < n; i++)
        {
            psum[i] = psum[i-1] + steps[i];
            pmax[i] = max(pmax[i-1], steps[i]);
        }
        for (int i = 0; i < q; i++)
        {
            int ind = binSearch(pmax, query[i], n);
            if(ind == -1){
                cout << "0" << " ";
            }else{
                cout << psum[ind] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}