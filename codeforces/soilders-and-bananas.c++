#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll k, n, w;
    cin >> k >> n >> w;
    ll s = 0;
    ll count = 0;
 
    
    for (int i = 1; i <= w; i++) {
        s += i * k;
    }
 
    if (s > n) {
        count = s - n;
    }
 
    cout << count;
    return 0;
}