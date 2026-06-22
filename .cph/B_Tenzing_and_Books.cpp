#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; ll x;
        cin >> n >> x;;
        vector<int> ans[3];
        
        for (int i = 0; i < 3; i++)
        {
            int s = 0;
            ans[i].push_back(s);
            for (int j = 0; j < n; j++)
            {
                int a; cin >> a;
                if((s | a) != s){
                    s |= a;
                    ans[i].push_back(s);
                }
            }
        }
        bool flag = false;
         for (int A : ans[0]){
                for(int B : ans[1]){
                    for(int C : ans[2]){
                        if((A | B | C) == x){
                            flag = true;
                        }           
                    }
                }
            }
        
            if(flag) cout << "Yes" << endl;
            else cout << "No" << endl;
        
    }

    return 0;
}