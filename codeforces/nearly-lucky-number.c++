#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    
    int count = 0;
    
    // Count how many 4s or 7s are there in the number
    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            count++;
        }
        n /= 10;
    }
    
    // Check if the count is 4 or 7
    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}