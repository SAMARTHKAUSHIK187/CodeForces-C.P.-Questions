#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d; cin >> n >> d;
    vector<long long> v(n);
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    int j = n - 1;
    sort(v.begin(), v.end());
    int teams = 0;
    int players = 2;
    while (i < j)
    {
        if(v[j] > d){
            teams++;
            j--;
        }
        else if(players * v[j] > d){
            teams++;
            players = 2;
            i++;
            j--;
        }
        else{
            players++;
            i++;
        }
    }
    if(v[j] > d) teams++;
    cout << teams << endl;


    return 0;
}