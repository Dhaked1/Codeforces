#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >>s3;
    string comb = s1 + s2;
    
    if (comb.length() != s3.length()) {
        cout << "NO";
        return 0;
    }
    
    sort(comb.begin(), comb.end());
    sort(s3.begin(), s3.end());

    if (comb == s3) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
