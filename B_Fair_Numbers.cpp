#include <bits/stdc++.h>
using namespace std;

bool isDiv(long long n){
    long long temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        if(digit){
            if((n % digit != 0)) return false;
        }
        temp /= 10;
    }

    return true;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long temp = n;
        while (true)
        {
            if(isDiv(temp)) break;
            else temp++;
        }
        cout << temp << "\n"; 
    }

    return 0;
}