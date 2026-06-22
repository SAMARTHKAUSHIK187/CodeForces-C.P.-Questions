#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, r, b; cin >> n >> r >> b;
        int parts = r / (b + 1);
        int rem = r % (b + 1);
        string s;
        for (int i = 0; i <= b; i++)
        {
            for (int j = 0; j < parts; j++)
            {
                s += 'R';
            }
            if(rem > 0){
                s += 'R';
                rem--;
            }
            if(i != b) s += 'B';
        }
        
        cout << s << "\n";
        
    }

    return 0;
}