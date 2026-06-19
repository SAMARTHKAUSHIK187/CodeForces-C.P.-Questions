#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int dis_balanced = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '('){
                cnt++;
            }
            else{
                cnt--;
                if(cnt < 0){
                    dis_balanced++;
                    cnt = 0;
                }
            }
        }
        

        cout << dis_balanced << endl;
        

    }

    return 0;
}