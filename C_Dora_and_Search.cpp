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
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        int i = 0, j = n-1;
        int maxi = n, mini = 1;
        while (i < j)
        {
            int i0 = i, j0 = j;
            if(v[i] == mini){
                i++;
                mini++;
            }
            if(v[i] == maxi ){
                i++;
                maxi--;
            }
            if(v[j] == mini){
                j--;
                mini++;
            }
            if(v[j] == maxi){
            j--;
            maxi--;
            }
            
            if(i == i0 && j == j0){
                cout << i + 1 << " " << j + 1 << endl;
                flag = 1;
                break;
            }
        }    
        if(flag == 0) cout << -1 << endl;    
    }

    return 0;
}